//
// Created by Stephen Samuelson on 9/22/22.
//

#ifndef CPSC1021LAB3_SQUARE_H
#define CPSC1021LAB3_SQUARE_H


class Square {
    //Private variables for object
private:
    double side;

    //Public functions to interact with object variables
public:

    //Default constructor
    Square() {
       side = 1.0;
    }

    //Overloaded constructor for user initialization
    Square(double userSide) {
        side = userSide;
    }

    bool setSide(double s);

    double getSide();

    double calcArea();
};


#endif //CPSC1021LAB3_SQUARE_H
