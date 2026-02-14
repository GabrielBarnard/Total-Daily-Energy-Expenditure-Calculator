/*
 * Made by Gabriel Barnard
 * Made on the 14th of February 2026
 */


#include <iostream>
#include <memory>

#include "CalculateTDEE.h"
#include "Utility.h"

//Requests user to provide inputs. Also calls the calculateTDEE function.
void CalculateTDEE::queryUser() {
    auto utility = std::make_unique<Utility>();
    BodyDetails bodyDetails;

    std::cout << "Enter weight in kilograms: ";
    utility->safeCin(bodyDetails.weight, "Invalid Input. Your weight must be a number. Input: ");

    std::cout << "Enter height in centimeters: ";
    utility->safeCin(bodyDetails.centimeterHeight, "Invalid Input. Your height must be a number. Input: ");

    std::cout << "Enter age in years: ";
    utility->safeCin(bodyDetails.ageYears, "Invalid Input. Your age must be a number. Input: ");

    std::cout << "Are you a male? Answer with 'yes' or 'no': ";
    utility->yesOrNoBool(bodyDetails.isMale);

    std::cout << "Which of the following activity levels best Describes you?\n"; //TODO: Inputs should be 1-5 instead of the actual multiplier.
    std::cout << "1. Sedentary (1.25)\n";
    std::cout << "2. Lightly Active (1.375)\n";
    std::cout << "3. Moderately Active (1.55)\n";
    std::cout << "4. Very Active (1.725)\n";
    std::cout << "5. Extra Active (1.9)\n";
    utility->safeCin(bodyDetails.activityLevel, "Invalid Input. Please input an activity multiplier (listed above.) Input: ");

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
