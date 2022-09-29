//
// Created by Stephen Samuelson on 9/22/22.
//

#ifndef CPSC1021LAB3_RECTANGLE_H
#define CPSC1021LAB3_RECTANGLE_H


class Rectangle {
    //Private variables for object
private:
    double length;
    double width;

    //Public functions to interact with object variables
public:

    //Default constructor
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    //Overloaded constructor for user initialization
    Rectangle(double userLength, double userWidth) {
        length = userLength;
        width = userWidth;
    }

    bool setLength(double l);

    bool setWidth(double w);

    double getLength();

    double getWidth();

    double calcArea();
};


#endif //CPSC1021LAB3_RECTANGLE_H
