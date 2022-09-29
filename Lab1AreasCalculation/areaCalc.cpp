/*
Name: Stephen Samuelson
Class: 1021
Date: 9/6/2022
Desc: Calculates the area of a given shape and outputs the result
Time: 1 hour
*/

//Headers
#include <iostream>
#include <iomanip>
using namespace std;

//Main function
int main() {

    //Constant variable for pi
    const double PI = 3.14159;

    //Variables for input and calculation
    int userChoice;
    double squareSide;
    double circleRadius;
    double rightTriangleBase;
    double rightTriangleHeight;

    //Menu
    cout << "1 -- square" << endl;
    cout << "2 -- circle" << endl;
    cout << "3 -- right triangle" << endl;
    cout << "4 -- quit" << endl;

    //User input
    cin >> userChoice;

    //Check if userChoice is valid. If valid then perform relevant calculations
    if (userChoice < 1 || userChoice > 4) {
        cout << "You entered an invalid choice. Good bye!";
        return 0;

    } else if (userChoice == 1) {
        cout << "Please enter the length of the square." << endl;
        cin >> squareSide;

        double squareArea = squareSide * squareSide;

        cout << "Area = " << fixed << setprecision(2) << squareArea;

    } else if (userChoice == 2) {
        cout << "Please enter radius of the circle." << endl;
        cin >> circleRadius;

        double circleArea = (circleRadius * circleRadius) * PI;

        cout << "Area = " << fixed << setprecision(2) << circleArea;

    } else if (userChoice == 3) {
        cout << "Please enter the base of the triangle." << endl;
        cin >> rightTriangleBase;

        cout << "Please enter the height of the triangle." << endl;
        cin >> rightTriangleHeight;

        double rightTriangleArea = (rightTriangleBase * rightTriangleHeight) / 2;

        cout << "Area = " << fixed << setprecision(2) << rightTriangleArea;

    } else if (userChoice == 4) {
        return 0;
    }

    //Exit program
    return 0;
}
