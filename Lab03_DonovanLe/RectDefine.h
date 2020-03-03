/*
Donovan Le
Goel CIS22B
Lab 03


*/
#pragma once

#include "RectDefine.h"
#include <string>
#include <algorithm>

class Rectangle {
	
private:
	// Each rectangle will contain a name and two seperate points defining their location on the X and Y axis
	std::string name;
	int x1, x2, y1, y2;
public:
	// Two functions that will return an int of perimeter and area of Rectangle
	int perimeter();
	int area();

	// Overload the cin and cout of the Rectangle
	friend std::ostream & operator << (std::ostream &out, const Rectangle &c);
	friend std::istream & operator >> (std::istream &in, Rectangle &c);
	
	// Operator overloading through member function to return the addition of two Rectangles
	Rectangle operator+(Rectangle const &two);
	// Operator overloading through friend function to return the subtraction of two Rectangles
	friend Rectangle operator-(Rectangle const &one, Rectangle const &two);

	std::string getName();
};