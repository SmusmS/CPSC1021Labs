/*
Name: Stephen Samuelson
Class: 1021
Date: 9/6/2022
Desc: Prompts user to enter number of bike rides to campus and award them points accordingly
Time: 20 minutes
*/
#include <iostream>
using namespace std;

//Main function
int main() {
    //Variable declaration. userRides is set to -1 to check for number > -1 in while loop
    int userRides = -1;
    int userPoints;

    cout << "Please enter the number of bike rides to campus."<< endl;
    cin >> userRides;

    //Check that userRides is not negative. If negative then re-prompt.
    while (userRides < 0) {
        cout << "Invalid input, please enter a number larger than 0."<< endl;
        cin >> userRides;
    }

    //Give user points according to number of rides. If over 5 rides then 50 points are awarded
    if (userRides == 0) {
        userPoints = 0;
    } else if (userRides == 1) {
        userPoints = 3;
    } else if (userRides == 2) {
        userPoints = 10;
    } else if (userRides == 3) {
        userPoints = 15;
    } else if (userRides == 4) {
        userPoints = 30;
    } else {
        userPoints = 50;
    }

    //Output users earned points
    cout << "You earned " << userPoints << " points this semester";

    //Exit program
    return 0;
}
