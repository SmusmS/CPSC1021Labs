//
// Created by Stephen Samuelson on 9/15/22.
// Validate user input and make sure input is not negative. If negative reprompt and change value
//

#include "validateUserInput.h"

//validateUserInput function
bool validateUserInput(float userInput) {

    //If userInput is negative then userInput is not valid and return false
    if (userInput < 0) {
        return false;
    } else {
        return true;
    }
}