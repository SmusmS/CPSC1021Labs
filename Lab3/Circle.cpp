//
// Created by Stephen Samuelson on 9/22/22.
//

#include "Circle.h"

//Set Circle object radius to double r
bool Circle::setRadius(double r) {

    //Test parameter r for valid input. If valid set radius to r
    if (r < 0) {
        return false;
    } else {
        radius = r;
        return true;
    }
}

//Return Cricle object radius
double Circle::getRadius() {
    return radius;
}

//Calculate and return Circle object area
double Circle::calcArea() {
    return (radius * radius) * 3.14;
}