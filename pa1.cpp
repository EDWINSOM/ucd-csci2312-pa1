// Programmer: Marisa Edwinson      CSCI2321    Fall 2015   PA 01

#include "pa1.h"
#include "point.h"
#include <cmath>

// Global Function

/*
 takes by reference 3 Point objects, computes the area within the triangle defined by these points
 using Heron's formula and returns it as a double floating point
*/

double computeArea(Point &a, Point &b, Point &c)
{
    double sideA = b.distanceTo(c);                     // side A of triangle is distance from Point b to Point c
    double sideB = c.distanceTo(a);                     // side B of triangle is distance from Point c to Point a
    double sideC = a.distanceTo(b);                     // side C of triangle is distance from Point a to Point b

    double s = (sideA + sideB + sideC) / 2;             // s is the semiperimeter of the triangle


    // Heron's formula: calculates the area of a triangle based on triangle
    // with sides a,b, and c. Area value stored as a double.

    double A = sqrt( s *(s - sideA) * ( s - sideB) * (s - sideC) );

    return A;

}
