#include "Shape.h"
#include <iostream>

Shape::Shape()
{
	label = "default";
	perimeter = 0;
}

Shape::Shape(std::string _label)
{
	label = _label;
}

Shape::~Shape()
{
	perimeter = 0;
}

std::string Shape::getLabel()
{
	return label;
}

void Shape::print()
{
	std::cout << "Deffault shape\n";
}
