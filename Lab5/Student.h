/*
 * Name: Stephen Samuelson
 * Desc: Header for class Student
 * Date: 10/10/2022
 * Time: 1 hour
 */

#ifndef CPSC1021LAB5_STUDENT_H
#define CPSC1021LAB5_STUDENT_H

#include <string>
using namespace std;

class Student {

//Private member variables for Student creation.
private:
    string firstName, lastName, address, email;

    int graduationDate;

    bool enrollmentStatus;

//Public functions for Student creation.
public:

    //Default constructor
    Student(){

    }

    //Overloaded constructor. Parameters are abbreviations for private variables.
    Student(string fn, string ln, string a, string e, int gd, bool es) {
        firstName = fn;
        lastName = ln;
        address = a;
        email = e;
        graduationDate = gd;
        enrollmentStatus = es;
    }

    //Public setter functions TODO FINISH SETTER FUNCTIONS
    bool setFirstName();
    bool setLastName();
    bool setAddress();
    bool setEmail();
    bool setGraduationDate();
    bool setEnrollmentStatus();

    //Public getter functions
    string getFirstName() {return firstName;}
    string getLastName() {return lastName;}
    string getAddress() {return address;}
    string getEmail() {return email;}

    int getGraduationDate() {return graduationDate;}

    bool getEnrollmentStatus() {return enrollmentStatus;}
};


#endif //CPSC1021LAB5_STUDENT_H
