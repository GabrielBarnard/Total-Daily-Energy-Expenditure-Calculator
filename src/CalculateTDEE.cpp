/*
 * Made by Gabriel Barnard
 * Made on the 14th of February 2026
 */


#include <iostream>

#include "CalculateTDEE.h"

//Requests user to provide inputs. Also calls the calculateTDEE function.
void CalculateTDEE::queryUser() {
    BodyDetails bodyDetails;

    std::cout << "Enter weight in kilograms: ";
    std::cin >> bodyDetails.weight;

    std::cout << "Enter height in centimeters: ";
    std::cin >> bodyDetails.centimeterHeight;

    std::cout << "Enter age in years: ";
    std::cin >> bodyDetails.ageYears;

    std::cout << "Are you a male? Answer with '1' (yes) or '0' (no): ";          //TODO: Enable inputs as 'yes' and 'no'.
    std::cin >> bodyDetails.isMale;

    std::cout << "Which of the following activity levels best Describes you?\n"; //TODO: Inputs should be 1-5 instead of the actual multiplier.
    std::cout << "1. Sedentary (1.25)\n";
    std::cout << "2. Lightly Active (1.375)\n";
    std::cout << "3. Moderately Active (1.55)\n";
    std::cout << "4. Very Active (1.725)\n";
    std::cout << "5. Extra Active (1.9)\n";
    std::cin >> bodyDetails.activityLevel;

    std::cout << "Required daily calories: ";
    std::cout << calcTDEE(bodyDetails);
}

//Calculates the TDEE (Total Daily Energy Expenditure)
double CalculateTDEE::calcTDEE(const BodyDetails& body) {
    if(body.isMale) {
        return ((10 * body.weight) + (6.25 * body.centimeterHeight) - (5 * body.ageYears) + 5) * body.activityLevel;   //Mifflin-St Jeor Equation (Male)
    } else {
        return ((10 * body.weight) + (6.25 * body.centimeterHeight) - (5 * body.ageYears) - 161) * body.activityLevel; //Mifflin-St Jeor Equation (Female)
    }

    return -1;
}
