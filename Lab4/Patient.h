//
// Created by Stephen Samuelson on 9/28/22.
//

#ifndef CPSC1021LAB2_PATIENT_H
#define CPSC1021LAB2_PATIENT_H


class Patient {
private:
    int days;
    double rate;
    double services;
    double medication;
    char patientType;

    //Private validation functions to be called by class Patient. Returns false if input is invalid
    bool validateInput(int input) {return input > 0;}
    bool validateInput(double input) {return input > 0;}
    bool validateInput(char input) {return input == 'I' || input == 'O';}

public:

    //Default constructor
    Patient() {
        days = 0;
        rate = 0.0;
        services = 0.0;
        medication = 0.0;
        patientType = 'I';
    }

    //Overloaded constructor for outPatient object
    Patient(double userServices, double userMedication, char userPatientType) {
        services = userServices;
        medication = userMedication;
        patientType = userPatientType;
    }

    //Overloaded constructor for inPatient object
    Patient(int userDays, double userRate, double userServices, double userMedication, char userPatientType) {
        days = userDays;
        rate = userRate;
        services = userServices;
        medication = userMedication;
        patientType = userPatientType;
    }

    //Setter functions for Patient object
    void setDays(int userDays);
    void setRate(double userRate);
    void setServices(double userServices);
    void setMedication(double userMedication);
    void setPatientType(char userPatientType);

    //Getter function for Patient object
    int getDays() {return days;}
    double getRate() {return rate;}
    double getServices() {return services;}
    double getMedication() {return medication;}
    char getPatientType() {return patientType;}

    //Calculate total charges and return the result
    double calcTotalCharges() {return (days * rate) + services + medication;}
};


#endif //CPSC1021LAB2_PATIENT_H
