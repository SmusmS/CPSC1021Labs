//
// Created by Stephen Samuelson on 9/22/22.
//

#include "Trapezoid.h"

//Set Trapezoid object base1 to b
bool Trapezoid::setBase1(double b){

    //Test passed parameter b for valid input. If valid set base1 to b
    if (b < 0) {
        return false;
    } else {
        base1 = b;
        return true;
    }
}

//Set Trapezoid object base2 to b
bool Trapezoid::setBase2(double b){

    //Test parameter b for valid input. If valid set base2 to b
    if (b < 0) {
        return false;
    } else {
        base2 = b;
        return true;
    }
}

//Set Trapezoid object height to h
bool Trapezoid::setHeight(double h){

    //Test parameter h for valid input. If valid set height to h
    if (h < 0) {
        return false;
    } else {
        height = h;
        return true;
    }
}

//Return Trapezoid object base1
double Trapezoid::getBase1(){
    return base1;
}

//Return Trapezoid object base2
double Trapezoid::getBase2(){
    return base2;
}

//Return Trapezoid object height
double Trapezoid::getHeight(){
    return height;
}

//Calculate and return Trapezoid object area
double Trapezoid::calcArea(){
    return ((base1 + base2) / 2) * height;
}