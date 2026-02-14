/*
 * Made by Gabriel Barnard
 * Made on the 14th of February 2026
 */

#include <iostream>
#include <memory>

#include "CalculateTDEE.h"

int main() {
    bool exit = false;
    auto calcTDEE = std::make_unique<CalculateTDEE>();

    while (!exit) {
        calcTDEE->queryUser();
        std::cout << '\n';
        std::cout << "Would you like to continue? Input 0 (yes) or 1 (no): "; //TODO: Enable user to input yes or no instead of 1 or 0.
        std::cin >> exit;
    }
}
