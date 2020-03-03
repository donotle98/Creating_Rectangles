/*
Donovan Le
Goel CIS22B
Lab 03


*/

#include <iostream>
#include <string>
#include "RectDefine.h"

int main() {
	std::string userLoopChoice;
	bool loop = true;
	while (loop) {
		Rectangle one;
		Rectangle two;
		std::cout << "Enter Rectangle One: (in this order) Name, X-Coordinate 1, Y-Coordinate 1, X-Coordinate 2, Y-Coordinate 2"<< std::endl;
		std::cin >> one;
		std::cout << "Enter Rectangle Two: " << std::endl;
		std::cin >> two;
		std::cout << std::endl << one << std::endl;
		std::cout << one.getName() << "'s perimeter is " << one.perimeter() << " and area is " << one.area() << std::endl << std::endl;
		std::cout << two << std::endl;
		std::cout << two.getName() << "'s perimeter is " << two.perimeter() << " and area is " << two.area() << std::endl << std::endl;
		

		std::cout << "Would you like to restart the program? (yes or no)" << std::endl;
		std::cin >> userLoopChoice;
		if (userLoopChoice == "no" || userLoopChoice == "No") {
			loop = false;
		}
	}

	system("break");
	return 0;
}