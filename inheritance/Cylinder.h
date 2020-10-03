/*
    Solis, Jose

    September 27, 2020

    CS A250
    A5 - Inheritance
*/

#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

// Class definition
// Your code here...

class Cylinder : public Circle
{
public:
    Cylinder() : height(0.0) {};
    Cylinder(double newRadius, double newPi, double newHeight)
    {
        Circle::setRadius(newRadius);
        Circle::setPi(newPi);

        height = newHeight;
    }

    double getHeight() const;
    void setHeight(double newHeight);

    double calculateVolume();
    void printDimensions();

    ~Cylinder();

private:
    double height;
};

#endif
