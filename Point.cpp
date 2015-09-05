// Programmer: Marisa Edwinson      CSCI2321    Fall 2015   PA 01

#include "point.h"
#include <cmath>

// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)
Point::Point() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY, initZ)
Point::Point(double initX, double initY, double initZ) {
    x = initX;
    y = initY;
    z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
    // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
    x = newX;
}

void Point::setY(double newY) {
    y = newY;
}

void Point::setZ(double newZ) {
    z = newZ;

}

// Accessors
// Return the current values of private member variables

double Point::getX() const {
    return x;
}

double Point::getY() const{
    return y;
}

double Point::getZ() const{
    return z;

}

/* Calculates distance between 2 points (the point calling the member function and the point passed in by reference)
   sqrt() is square root function defined in <cmath>, pow(base,power) calculates a base number raised to a specified power
*/

double Point::distanceTo(Point & point2)
{
    double distance = 0;

    distance = sqrt( pow((point2.x - x),2) + pow((point2.y - y),2) + pow((point2.z - z),2) );

    return distance;                    // distance returned as a double

}

