/*
 * Made by Gabriel Barnard
 * Updated on the 15th of February 2026
 */

#include <iostream>
#include <memory>

#include "CalculateTDEE.h"
#include "Utility.h"

int main() {
    bool notExit = true;
    auto calcTDEE = std::make_unique<CalculateTDEE>();

    calcTDEE->queryUser();
}
