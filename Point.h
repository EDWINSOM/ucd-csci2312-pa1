// Programmer: Marisa Edwinson      CSCI2321    Fall 2015   PA 01

#ifndef PA1_POINT_H
#define PA1_POINT_H

// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

class Point {

private:
    double x;                                   // coordinates of each Point object
    double y;
    double z;

public:
    // Constructors
    Point();                                   // default constructor
    Point(double x, double y, double z);       // three-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;

    double distanceTo(Point & point2);     // function calculates the distance between two points
};

#endif // __point_h

#endif //PA1_POINT_H

