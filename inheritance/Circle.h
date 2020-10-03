/*
    Solis, Jose

    September 27, 2020

    CS A250
    A5 - Inheritance
*/

#ifndef CIRCLE_H
#define CIRCLE_H

// Class definition
// Your code here...

class Circle 
{
public:
    Circle() : radius(0.0), pi(3.14) {}
    Circle(double newRadius, double newPi) 
    {
        radius = newRadius;
        pi = newPi;
    }

    double getRadius() const;
    double getPi() const;

    void setRadius(double newRadius);
    void setPi(double newPi);

    double calculateArea();
    void printDimensions() const;

    ~Circle() {};

private:
    double radius;
    double pi;
};

#endif
