//
// Created by Stephen Samuelson on 9/22/22.
//

#ifndef CPSC1021LAB3_CIRCLE_H
#define CPSC1021LAB3_CIRCLE_H


class Circle {
    //Private variables for object
private:
    double radius;

    //Public functions to interact with object variables
public:

    //Default constructor
    Circle() {
        radius = 1.0;
    }

    //Overloaded constructor for user initialization
    Circle(double userRadius) {
        radius = userRadius;
    }

    bool setRadius(double r);

    double getRadius();

    double calcArea();
};


#endif //CPSC1021LAB3_CIRCLE_H
