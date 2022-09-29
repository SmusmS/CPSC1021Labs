/*
Name: Stephen Samuelson
Class: 1021
Date: 9/15/2022
Desc: Calculate patient charges after treatment
Time: 2 hours
*/

//Include header files and iostream for cin and cout
#include "validateUserInput.h"
#include "calcTotalCharges.h"
#include "Patient.h"

#include <iostream>
#include <iomanip>
using namespace std;

//Main function
int main() {

    //Variable userInput for character input
    char userInput;

    //Explain program and prompt for input
    cout << "This program will calculate a patient's hospital charges." << endl;
    cout << "Enter I for in-patient or O for out-patient: " << endl;
    cin >> userInput;

    //While userInput does not equal const value reprompt for correct input
    while (userInput != 'I' && userInput != 'O') {
        cout << "ERROR Please enter I for in-patient or O for out-patient:" << endl;
        cin >> userInput;
    }

    //Check for inpatient
    if (userInput == 'I') {

        //Create variables for inpatient
        float numDays;
        float roomRate;
        float hospitalServices;
        float medicationCharges;

        //Prompt user for charges and validate
        cout << "Number of days in the hospital: " << endl;
        cin >> numDays;
        while (!validateUserInput(numDays)) {
            cout << "ERROR: Number cannot be negative." << endl;
            cin >> numDays;
        }

        //Prompt user for charges and validate
        cout << "Daily room rate ($): " << endl;
        cin >> roomRate;
        while (!validateUserInput(roomRate)) {
            cout << "ERROR: Number cannot be negative." << endl;
            cin >> roomRate;
        }

        //Prompt user for charges and validate
        cout << "Lab fees and other service charges ($): " << endl;
        cin >> hospitalServices;
        while (!validateUserInput(hospitalServices)) {
            cout << "ERROR: Number cannot be negative." << endl;
            cin >> hospitalServices;
        }

        //Prompt user for charges and validate
        cout << "Medication charges ($): " << endl;
        cin >> medicationCharges;
        while (!validateUserInput(medicationCharges)) {
            cout << "ERROR: Number cannot be negative." << endl;
            cin >> medicationCharges;
        }

        //Calculate total charges
        double totalCharges = calcTotalCharges(numDays, roomRate, hospitalServices, medicationCharges);
        cout << "Your total hospital bills is $" << fixed <<setprecision(2) << totalCharges;

        //Exit program
        return 0;
    } else {

        //Create variables for outpatient. numDays and roomRate will always be greater than 0 for outpatient
        float hospitalServices;
        float medicationCharges;

        //Prompt user for charges and validate
        cout << "Lab fees and other service charges ($): " << endl;
        cin >> hospitalServices;
        while (!validateUserInput(hospitalServices)) {
            cout << "ERROR: Number cannot be negative." << endl;
            cin >> hospitalServices;
        }

        //Prompt user for charges and validate
        cout << "Medication charges ($): " << endl;
        cin >> medicationCharges;
        while (!validateUserInput(medicationCharges)) {
            cout << "ERROR: Number cannot be negative." << endl;
            cin >> medicationCharges;
        }

        //Calculate total charges
        double totalCharges = calcTotalCharges(hospitalServices, medicationCharges);
        cout << "Your total hospital bills is $" << fixed <<setprecision(2) << totalCharges;

        //Exit program
        return 0;
    }
}
