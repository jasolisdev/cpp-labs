/*
	Solis, Jose

	September 18, 2020

	CS A250
	Lab 4 - A4 Operator Overloading
*/

#include "Vector2D.h"

using namespace std;

ostream& operator<<(ostream& out, const Vector2D& v)
{
	out << "<" << v.x << "," << v.y << ">";

	return out;
}

Vector2D::Vector2D()
{
	x = 0;
	y = 0;
}

Vector2D::Vector2D(int newX, int newY)
{
	x = newX;
	y = newY;
}

int Vector2D::operator*(const Vector2D& newVector) const
{
	return (x * newVector.x + y * newVector.y);
}

bool Vector2D::operator==(const Vector2D& newVector) const
{
	return (x == newVector.x && y == newVector.y);
}

Vector2D::~Vector2D()
{}
