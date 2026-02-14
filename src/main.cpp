/*
 * Made by Gabriel Barnard
 * Made on the 14th of February 2026
 */

#include <iostream>
#include <memory>

#include "CalculateTDEE.h"
#include "Utility.h"

int main() {
    bool notExit = true;
    auto calcTDEE = std::make_unique<CalculateTDEE>();

    while (notExit) {
        calcTDEE->queryUser();
        std::cout << '\n';

        auto utility = std::make_unique<Utility>(); //TODO: See if there's a way to not have to create two Utility objects (one in main and one in CalculateTDEE.CPP)
        std::cout << "Would you like to continue? Input 'yes' or 'no': ";
        utility->yesOrNoBool(notExit);
    }
}
