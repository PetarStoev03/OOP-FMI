#include "Triangle.h"
#include <iostream>

Triangle::Triangle() : Shape()
{
	height = 0;
	side = 0;
}

Triangle::Triangle(std::string _label, double _height, double _side) : Shape(_label)
{
	height = _height;
	side = _side;
	perimeter = side * height / 2;
}

Triangle::~Triangle()
{
	height = 0;
	side = 0;
	perimeter = 0;
}

std::string Triangle::getLabel()
{
	return Shape::getLabel();
}

void Triangle::print()
{
	std::cout << "<|\n";
}

double Triangle::getPerimeter()
{
	return perimeter;
}

Shape* Triangle::copy() const
{
	return new Triangle(*this);
}
