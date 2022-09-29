//
// Created by Stephen Samuelson on 9/22/22.
//

#include "Rectangle.h"

//Set Rectangle object length to l
bool Rectangle::setLength(double l){

    //Test parameter l for valid input. If valid set length to l
    if (l < 0) {
        return false;
    } else {
        length = l;
        return true;
    }
}

//Set Rectangle object width to w
bool Rectangle::setWidth(double w){
    width = w;

    //Test parameter w for valid input. If valid set width to w
    if (w < 0) {
        return false;
    } else {
        width = w;
        return true;
    }
}

//Return Rectangle object length
double Rectangle::getLength(){
    return length;
}

//Return Rectangle object width
double Rectangle::getWidth(){
    return width;
}

//Calculate and return Rectangle object area
double Rectangle::calcArea(){
    return length * width;
}