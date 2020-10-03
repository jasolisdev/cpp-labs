/*
    Solis, Jose

    September 27, 2020

    CS A250
    A5 - Inheritance
*/

#include "Cylinder.h"

#include <iostream>
using namespace std;

// Class implementation
// Your code here...

double Cylinder::getHeight() const
{
    return height;
}

void Cylinder::setHeight(double newHeight)
{
    height = newHeight;
}

double Cylinder::calculateVolume()
{
    return Circle::calculateArea() * height;
}

void Cylinder::printDimensions()
{
    cout << "Radius: " << Circle::getRadius() << endl;
    cout << "Pi: " << Circle::getPi() << endl;
    cout << "Height: " << height << endl;
}

Cylinder::~Cylinder() {}
