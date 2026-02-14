/*
 * Made by Gabriel Barnard
 * Made on the 14th of February 2026
 */


#ifndef CALCULATE_H
#define CALCULATE_H

#include <string>
#include <limits>

class CalculateTDEE {
    public:
        void queryUser();

        template <typename T>
        //Type of cin that checks for invalid input
        void safeCin(T &value, std::string warningMessage) { //TODO: Find a way to move safeCin into the CalculateTDEE.cpp file.
            std::cin >> value;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << warningMessage;
                safeCin(value, warningMessage);
            }
        }
    private:
        struct BodyDetails {
            double weight{};
            double centimeterHeight{};
            double ageYears{};
            bool isMale{};
            double activityLevel{};
        };

        double calcTDEE(const BodyDetails& body);           //TDEE = Total Daily Energy Expenditure
};

#endif
