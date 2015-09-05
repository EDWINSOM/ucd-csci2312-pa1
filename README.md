## CSCI 2312: Fall 2015
Programming Assignment 1

Programmer: Marisa Edwinson

Description of the 3 Dimensional "Point" class:

    Each Point class object makes use of three core variables x,y, and z. These are declared
    as private member variables and resemble a three dimensionally mapped coordinate of a "point"
    in the form of (x,y,z). Besides these member variables, no other variables or functions are
    defined in the private section of the Point class declaration.

    Each Point object has two possible versions of a constructor, the first:

                                      Point();
    is the default constructor, used when an uninitialized Point object is created. A
    second constructor is available is the x,y, and z coordinates are readily available
    to initialize a Point class object with:
                                       Point(double x, double y, double z);

    A destructor is also described in the class declaration:        ~Point();
    This can be called when a Point object is no longer going
    to be used, or it will be automatically called when the main() program terminates.

    Each coordinate of the Point class is given a mutator function that allows the x, y, or
    z to be set individually in the specified Point object. Likewise, each individual coordinate
    is given an accessor function to allow the programmer to display the current value of the Point
    class' x, y, or z coordinate.

    Because more than one Point object may be declared, a function in the Point class
    declaration is available to determine the distance between to points of the form
    (x,y,z). This function is :

                                        distanceTo(Point & point2)
