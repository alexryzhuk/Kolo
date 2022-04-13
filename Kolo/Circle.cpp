#include <iostream>
#include "Circle.h"

Circle::Circle() {
	radius = 0;
}


Circle::Circle(double r) {
	this->radius = r;
}


Circle::~Circle() {};


std::istream& operator>>(std::istream& in, Circle& c) {
	std::cout << "Enter radius: " << std::endl;
	in >> c.radius;
	return in;
}


bool Circle::operator==(const Circle& other) {
	if (this->radius == other.radius) return true;
	else return false;
}