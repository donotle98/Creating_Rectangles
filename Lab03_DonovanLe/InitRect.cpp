/*
Donovan Le
Goel CIS22B
Lab 03


*/
#include "RectDefine.h"
// To return the smallest point of the Rectangle
int smallest(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}
// To return the largest point of the Rectangle
int largest(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
// Add all sides of Rectangle together to get perimeter
int Rectangle::perimeter(){
	int length = x2 - x1;
	int width = y2 - y1;
	int xSides = length * 2;
	int ySides = width * 2;
	return xSides + ySides;
}
// Multiply the the x and y sides of the REctangle to get the area
int Rectangle::area() {
	int length = x2 - x1;
	int width = y2 - y1;
	return length * width;
}
// Overload operator to display the name and coordinates of the Rectangle
std::ostream & operator << (std::ostream &out, const Rectangle &c) {
	out << c.name << "'s two corners are at " << "(" << c.x1 << "," << c.y1 << ") " << " and " << "(" << c.x2 << "," << c.y2 << ")" << std::endl;
	return out;
}
// Overload operator to take in user input
std::istream & operator >> (std::istream &in, Rectangle &c) {
	in >> c.name;
	in >> c.x1;
	in >> c.y1;
	in >> c.x2;
	in >> c.y2;
	return in;
}
// Operator to subtract two Rectangles
Rectangle operator-(Rectangle const & one, Rectangle const & two) {
	Rectangle res;
	res.name = "subtractRectangle";
	if (one.x1 > two.x2 || one.x2 < two.x1 || one.y1 < two.y2 || one.y2 > two.y1) {
		res.x1 = res.y1 = res.x2 = res.y2 = 0;
		return res;
	}
	else {
		if (one.x1 < two.x1) {
			res.x1 = one.x1;
			res.y1 = smallest(two.y1, one.y1);
			res.x2 = one.x2;
			res.y2 = largest(two.y2, one.y2);
		}
		else {
			res.x1 = one.x1;
			res.y1 = smallest(two.y1, one.y1);
			res.x2 = two.x2;
			res.y2 = largest(two.y2, one.y2);
		}
		return res;
	}
}
// Operator to add two Rectangles
Rectangle Rectangle::operator+(Rectangle const &two) {
	Rectangle res;
	res.name = "addRectangle";
	res.x1 = smallest(this->x1, two.x1);
	res.y1 = largest(this->y1, two.y1);
	res.x2 = largest(this->x2, two.x2);
	res.y2 = smallest(this->y2, two.y2);
	return res;
}
// Function to return the name the user gives the Rectangle
std::string Rectangle::getName()
{
	return name;
}

