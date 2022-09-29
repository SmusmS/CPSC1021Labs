//
// Created by Stephen Samuelson on 9/15/22.
// Calculate total charges using two functions
//
#include "calcTotalCharges.h"


//First function for outpatient charges
double calcTotalCharges(double hospitalServices, double medicationCharges) {

    //totalCharges is equal to hospitalServices plus medicationCharges
    double totalCharges = hospitalServices + medicationCharges;
    return totalCharges;
}

//Overloaded function for inpatient charges
double calcTotalCharges(double numDays, double roomRate, double hospitalServices, double medicationCharges) {

    //totalCharges is equal to length of stay times rate plus hospitalServices plus medicationCharges
    double totalCharges = (numDays * roomRate) + hospitalServices + medicationCharges;
    return totalCharges;
}

