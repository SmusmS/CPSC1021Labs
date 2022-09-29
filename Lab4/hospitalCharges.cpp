/* Author : Stephen Samuelson
 * Class : CPSC 1021
 * Lab : Lab 04
 * Time : 1 hour
 */

#include <iostream>
#include <iomanip>
#include "Patient.h"

using namespace std;


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

    if (userInput == 'I' || userInput == 'i') {

        Patient inPatient;

        //Variables for patient object
        int days;
        double rate;
        double services;
        double medication;
        char patientType = 'I';

        //Prompt user for days stayed in hospital
        cout << "Number of days in the hospital: " << endl;
        cin >> days;
        inPatient.setDays(days);

        //Prompt user for hospital stay rate
        cout << "Daily room rate ($): " << endl;
        cin >> rate;
        inPatient.setRate(rate);

        //Prompt user for cost of hospital services
        cout << "Lab fees and other service charges ($): " << endl;
        cin >> services;
        inPatient.setServices(services);

        //Prompt user for medication costs
        cout << "Medication charges ($): " << endl;
        cin >> medication;
        inPatient.setMedication(medication);

        //Set patientType
        inPatient.setPatientType(patientType);

        //Create a new object using input variables
        Patient patient(days, rate, services, medication, patientType);

        //Output total costs
        cout << "Your total hospital bills is $" << fixed <<setprecision(2) << patient.calcTotalCharges();

        //Exit program
        return 0;

    } else {

        Patient outPatient;

        //Variables for patient object
        double services;
        double medication;
        char patientType = 'O';

        //Prompt user for cost of hospital services
        cout << "Lab fees and other service charges ($): " << endl;
        cin >> services;
        outPatient.setServices(services);

        //Prompt user for medication costs
        cout << "Medication charges ($): " << endl;
        cin >> medication;
        outPatient.setMedication(medication);

        //Set patientType
        outPatient.setPatientType(patientType);

        //Create a new object using input variables
        Patient patient(services, medication, patientType);

        //Output total costs
        cout << "Your total hospital bills is $" << fixed <<setprecision(2) << patient.calcTotalCharges();

        //Exit program
        return 0;

    }
}
