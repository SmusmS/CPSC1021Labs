//
// Created by Stephen Samuelson on 9/22/22.
//

#ifndef CPSC1021LAB3_TRAPEZOID_H
#define CPSC1021LAB3_TRAPEZOID_H


class Trapezoid {
    //Private variables for object
private:
    double base1;
    double base2;
    double height;

    //Public functions to interact with object variables
public:

    //Default constructor
    Trapezoid() {
        base1 = 1.0;
        base2 = 1.0;
        height = 1.0;
    }

    //Overloaded constructor for user initialization
    Trapezoid(double userBase1, double userBase2, double userHeight) {
        base1 = userBase1;
        base2 = userBase2;
        height = userHeight;
    }

    bool setBase1(double b);

    bool setBase2(double b);

    bool setHeight(double h);

    double getBase1();

    double getBase2();

    double getHeight();

    double calcArea();
};


#endif //CPSC1021LAB3_TRAPEZOID_H
