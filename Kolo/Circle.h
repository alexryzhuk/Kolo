#pragma once
#include <iostream>
class Circle
{
private:
	double radius;
public:
	Circle(void);
	Circle(double);
	~Circle(void);
	friend std::istream& operator>>(std::istream&, Circle& c);
	bool operator==(const Circle& other);
};

