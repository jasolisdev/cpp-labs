/*
    Solis, Jose

    September 27, 2020

    CS A250
    A5 - Inheritance
*/

#include "Circle.h"

#include <iostream>
using namespace std;

// Class implementation
// Your code here...

double Circle::getRadius() const
{
    return radius;
}

double Circle::getPi() const
{
    return pi;
}

void Circle::setRadius(double newRadius)
{
    radius = newRadius;
}

void Circle::setPi(double newPi)
{
    pi = newPi;
}

double Circle::calculateArea()
{
    return (getPi() * radius) * radius;
}

void Circle::printDimensions() const
{
    cout << "Radius: " << getRadius() << endl;
    cout << "Pi: " << getPi() << endl;
}
