/*
	Solis, Jose

	September 18, 2020

	CS A250
	Lab 4 - A4 Operator Overloading
*/

#ifndef	VECTOR2D_H
#define VECTOR2D_H

#include <iostream>

class Vector2D
{
	friend std::ostream& operator<<(std::ostream& out, const Vector2D& v);

public:
	Vector2D();
	Vector2D(int newX, int newY);

	int operator*(const Vector2D& newVector) const;

	bool operator==(const Vector2D& newVector) const;
	
	~Vector2D();

private:
	int x;
	int y;
};

#endif