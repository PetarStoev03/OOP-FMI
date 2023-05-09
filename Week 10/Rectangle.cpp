#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle():Shape()
{
	longSide = 0;
	shortSide = 0;
}

Rectangle::Rectangle(std::string _label, double _longSide, double _shortSide) : Shape(label)
{
	longSide = _longSide;
	shortSide = _shortSide;

	perimeter = longSide * shortSide;
}

Rectangle::~Rectangle()
{
	perimeter = 0;
	longSide = 0;
	shortSide = 0;
}

std::string Rectangle::getLabel()
{
	return Shape::getLabel();
}

void Rectangle::print()
{
	std::cout << "[]\n";
}

double Rectangle::getPerimeter()
{
	return perimeter;
}

Shape* Rectangle::copy() const
{
	return new Rectangle(*this);
}
