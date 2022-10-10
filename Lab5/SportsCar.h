/*
 * Name: Stephen Samuelson
 * Desc: Header for SportsCar class
 * Date: 10/10/2022
 * Time: 1 hour
 */

#ifndef CPSC1021LAB5_SPORTSCAR_H
#define CPSC1021LAB5_SPORTSCAR_H

#include <string>
using namespace std;


class SportsCar {

//Private member variables for SportsCar creation.
private:
    string make, model;

    int year, numDoors, numHorsePower;

//Public functions for SportsCar creation.
public:

    //Public setter functions TODO FINISH SETTER FUNCTIONS
    bool setMake();
    bool setModel();
    bool setYear();
    bool setNumDoors();
    bool setNumHorsePower();

    //Public getter functions
    string getMake() {return make;}
    string getModel() {return model;}

    int getYear() {return year;}
    int getNumDoors() {return numDoors;}
    int getNumHorsePower() {return numHorsePower;}
};


#endif //CPSC1021LAB5_SPORTSCAR_H
