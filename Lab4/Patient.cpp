//
// Created by Stephen Samuelson on 9/28/22.
//

#include "Patient.h"

//Setter functions for object Patient. Calls validateInput function to check that input is greater than 0
void Patient::setDays(int userDays) {
    if (validateInput(userDays)) {
        days = userDays;
    }
}
void Patient::setRate(double userRate) {
    if (validateInput(userRate)) {
        rate = userRate;
    }
}
void Patient::setServices(double userServices) {
    if (validateInput(userServices)) {
        services = userServices;
    }
}
void Patient::setMedication(double userMedication) {
    if (validateInput(userMedication)) {
        medication = userMedication;
    }
}
void Patient::setPatientType(char userPatientType) {
    if (validateInput(userPatientType)) {
        patientType = userPatientType;
    }
}