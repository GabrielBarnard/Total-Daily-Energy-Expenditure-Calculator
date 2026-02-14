/*
 * Made by Gabriel Barnard
 * Made on the 14th of February 2026
 */


#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include <iostream>

class Utility {
    public:
        //Type of cin that checks for invalid input
        template <typename T>
        void safeCin(T &value, std::string warningMessage) {
            std::cin >> value;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << warningMessage;
                safeCin(value, warningMessage);
            }
        }

        //Enables user input as 'yes' (true) or 'no' (false) for a boolean value
        void yesOrNoBool(bool& boolean) {
            safeCin(userInput, "Your input must be 'yes' or 'no'. Input: ");

            if (userInput == "yes") {
                boolean = true;
            }
            else if (userInput == "no") {
                boolean = false;
            }
            else {
                std::cout << "Your input must be 'yes' or 'no'. Input: ";
                yesOrNoBool(boolean);
            }
        }
    private:
        std::string userInput{};
};

#endif
