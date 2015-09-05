// Programmer: Marisa Edwinson      CSCI2321    Fall 2015   PA 01

#include <iostream>
#include <iomanip>
using namespace std;

#include "main.h"
#include "pa1.h"
#include "point.h"

int main() {

    double X, Y, Z;                                     // variables to store user input of coordinates for each point
    double area = 0;

    cout << endl << "Welcome, we will be computing the area of a triangle existing in 3 dimensional space" << endl;
    cout << endl << "I will need to collect data from you first....." << endl<< endl;

    cout << "Please enter the x,y,and z coordinates of the 1st point of interest." << endl;
    cout << "Important!: press enter after each individual value!" << endl << endl;

    // User inputs coordinates for each point
    cin >> X;
    cin >> Y;
    cin >> Z;
    Point one(X,Y,Z);                                   // creates a Point object, sets coordinates by using custom initializing constructor

    cout << endl<< endl;

    cout << "Great, now enter the x,y,z coordinates of the 2nd point, press enter after each individual value" << endl<< endl;

    cin >> X;
    cin >> Y;
    cin >> Z;
    Point two(X,Y,Z);                                 // creates a Point object, sets coordinates by using custom initializing constructor

    cout << endl << endl;

    cout << "Last Step: enter the x,y,z coordinates of the 3rd point, press enter after each individual value" << endl << endl;

    cin >> X;
    cin >> Y;
    cin >> Z;
    Point three(X,Y,Z);                             // creates a Point object, sets coordinates by using custom initializing constructor

    cout << endl;

   area = computeArea(one,two,three);               // sends in point objects, computes area of triangle created in 3D space

    cout << "The area of our 3 dimensional triangle created from points " <<
            "(" << one.getX() << "," << one.getY() << "," << one.getZ() << ")"                 // prints out coordinates of each Point in the form (x,y,z)
            ", (" << two.getX() << "," << two.getY() << "," << two.getZ() << ")"
            ", (" << three.getX() << "," << three.getY() << "," << three.getZ() <<

            ") is equal to " << fixed << setprecision(2) << area << endl << endl;              // displays area of the 3 dimensional triangle

    return 0;
}
