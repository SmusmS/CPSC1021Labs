//
// Created by Stephen Samuelson on 9/22/22.
//

#include "Square.h"

//Set Square object side to s
bool Square::setSide(double s){

    //Test parameter s for valid input. If valid then set side to s
    if (s < 0) {
        return false;
    } else {
        side = s;
        return true;
    }
}

//Return Square object side
double Square::getSide(){
    return side;
}

//Calculate and return Square object area
double Square::calcArea(){
    return side * side;
}