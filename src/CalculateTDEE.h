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
    private:
        struct BodyDetails {
            double weight{};
            double centimeterHeight{};
            double ageYears{};
            bool isMale{};
            double activityLevel{};
        };

        double calcTDEE(const BodyDetails& body); //TDEE = Total Daily Energy Expenditure
};

#endif
