#include "Circle.h"
#include <iostream>

Circle::Circle():Shape()
{
	radius = 0;
}

Circle::Circle(std::string _label, double _radius) : Shape(_label)
{
	radius = _radius;
	perimeter = PI * radius * radius;

}

Circle::~Circle()
{
	radius = 0;
	perimeter = 0;
}

std::string Circle::getLabel()
{
	return Shape::getLabel();
}

void Circle::print()
{
	std::cout << 'o\n';
}

double Circle::getPerimeter()
{
	return perimeter;
}

Shape* Circle::copy() const
{;
	return new Circle(*this);
}
