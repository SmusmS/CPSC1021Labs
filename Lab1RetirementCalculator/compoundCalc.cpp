/*
Name: Stephen Samuelson
Class: 1021
Date: 9/7/2022
Desc: compoundCalc function for retirementCalc output
Time: 5 minutes
*/

#include "compoundCalc.h"
#include <cmath>

//Retirement savings = principal * (1 + interestRate)^numOfYears
double compoundCalc(double principal, double interestRate, int numOfYears) {
    double retirementSavings = principal * pow((1 + interestRate), numOfYears);
    return retirementSavings;
}