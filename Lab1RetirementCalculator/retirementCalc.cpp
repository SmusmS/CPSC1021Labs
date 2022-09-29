/*
Name: Stephen Samuelson
Class: 1021
Date: 9/7/2022
Desc: Prompts user for retirement input values then calculates and outputs the retirement rates
Time: 30 minutes
*/

#include <iostream>
#include <iomanip>
#include "compoundCalc.h"
using namespace std;

//Main function
int main() {

    //Variable declaration for function call and return value
    double principal;
    double interestRate;
    double retirementSavings;
    int numOfYears;

    //Prompt user to enter principal, interest rate and number of years
    cout << "Please enter principal." << endl;
    cin >> principal;

    cout << "Please enter interest rate as a decimal." << endl;
    cin >> interestRate;

    cout << "Please enter the number of years your money will remain in the account." << endl;
    cin >> numOfYears;

    //Function call return being saved in retirementSavings for output
    retirementSavings = compoundCalc(principal, interestRate, numOfYears);

    cout << "Your retirement savings will be $" << fixed << setprecision(2) <<retirementSavings;

    return 0;
}
