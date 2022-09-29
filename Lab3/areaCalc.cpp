/*
Name: Stephen Samuelson
Class: 1021
Date: 9/15/2022
Desc: Calculate patient charges after treatment
Time: 2 hours
*/

//Include file headers
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Trapezoid.h"

//Include iostream for input and output
#include <iostream>
#include <iomanip>

using namespace std;

//Main function
int main() {

    //User input for menu choice
    int userInt = 0;

    //Menu for user choice. Each shape calculates and displays the area of the chosen shape. 5 quits the program
    cout << "1 -- circle" << endl;
    cout << "2 -- square" << endl;
    cout << "3 -- rectangle" << endl;
    cout << "4 -- trapezoid" << endl;
    cout << "5 -- quit" << endl;

    //Input user menu choice
    cin >> userInt;

    //Input validation. Check that userInt is 1 - 5.
    while ((userInt < 1) || (userInt > 5)) {
        cout << "ERROR: Invalid choice. Please pick between 1 and 5" << endl;

        cout << "1 -- circle" << endl;
        cout << "2 -- square" << endl;
        cout << "3 -- rectangle" << endl;
        cout << "4 -- trapezoid" << endl;
        cout << "5 -- quit" << endl;

        cin >> userInt;
    }

    //Switch statement for area menu
    switch (userInt) {

        //First case for menu choice 1
        case 1:

            //Create Circle object
            Circle circle;

            //variable radius for Circle object circle
            double radius;
            cin >> radius;

            //Test circle.radius for valid input. If valid, circle.radius is set to radius
            while (!circle.setRadius(radius)) {
                cout << "ERROR: Radius cannot be negative. Please enter correct radius." << endl;
                cin >> radius;
            }

            //Output radius and area
            cout << "Radius: " << fixed << setprecision(1) << circle.getRadius() << endl;
            cout << "Area: " << fixed << setprecision(1) << circle.calcArea() << endl;

            //Functions are complete, exit program
            return 0;

        //Second case for menu choice 2
        case 2:

            //Create Square object
            Square square;

            //Variable side for Square object square
            double side;
            cin >> side;

            //Test square.side for valid input. If valid then square.side is set to side
            while (!square.setSide(side)) {
                cout << "ERROR: Side cannot be negative. Please enter correct side." << endl;
                cin >> side;
            }

            //Output side and area
            cout << "Side: " << fixed << setprecision(1) << square.getSide() << endl;
            cout << "Area: " << fixed << setprecision(1) << square.calcArea() << endl;

            //Functions are complete, exit program
            return 0;

        //Third case for menu choice 3
        case 3:

            //Create Rectangle object
            Rectangle rectangle;

            //Variables length and width for Rectangle object rectangle
            double length;
            cin >> length;

            double width;
            cin >> width;

            //Test rectangle length for valid input. If valid then rectangle.length is set to length
            while (!rectangle.setLength(length)) {
                cout << "ERROR: Length cannot be negative. Please enter correct length." << endl;
                cin >> length;
            }

            //Test rectangle width for valid input. If valid then rectangle.width is set to width
            while (!rectangle.setWidth(width)) {
                cout << "ERROR: Width cannot be negative. Please enter correct width." << endl;
                cin >> width;
            }

            //Output length, width, and area
            cout << "Length: " << fixed << setprecision(1) << rectangle.getLength() << endl;
            cout << "Width: " << fixed << setprecision(1) << rectangle.getWidth() << endl;
            cout << "Area: " << fixed << setprecision(1) << rectangle.calcArea() << endl;

            //Functions are complete, exit program
            return 0;

        //Fourth case for menu choice 4
        case 4:

            //Create Trapezoid object
            Trapezoid trapezoid;

            //Variables base1, base2, and height for Trapezoid object trapezoid
            double base1;
            cin >> base1;

            double base2;
            cin >> base2;

            double height;
            cin >> height;

            //Test trapezoid base1 for valid input. If valid then trapezoid.base1 is set to base1
            while (!trapezoid.setBase1(base1)) {
                cout << "ERROR: Base cannot be negative. Please enter correct base." << endl;
                cin >> base1;
            }

            //Test trapezoid base2 for valid input. If valid then trapezoid.base2 is set to base2
            while (!trapezoid.setBase2(base2)) {
                cout << "ERROR: Base cannot be negative. Please enter correct base." << endl;
                cin >> base2;
            }

            //Test trapezoid height for valid input. If valid then trapezoid.height is set to height
            while (!trapezoid.setHeight(height)) {
                cout << "ERROR: Height cannot be negative. Please enter correct height." << endl;
                cin >> height;
            }

            //Output base1, base2, height and area
            cout << "Base1: " << fixed << setprecision(1) << trapezoid.getBase1() << endl;
            cout << "Base2: " << fixed << setprecision(1) << trapezoid.getBase2() << endl;
            cout << "Height: " << fixed << setprecision(1) << trapezoid.getHeight() << endl;
            cout << "Area: " << fixed << setprecision(1) << trapezoid.calcArea() << endl;

            //Functions are complete, exit program
            return 0;

        //Fifth case for menu choice 5. Quits program
        case 5:

            //Quit program
            return 0;

        //Default case should quit program
        default:
            return 0;
    }

}
