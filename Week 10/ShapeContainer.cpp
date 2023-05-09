#include "ShapeContainer.h"
#include <iostream>

ShapeContainer::~ShapeContainer()
{
	for (int i = 0; i < shapes.size(); i++)
	{
		delete shapes[i];
	}
}

void ShapeContainer::AddShape(const Shape& shape)
{
	Shape* obj = shape.copy();
	shapes.push_back(obj);
}

void ShapeContainer::printShapes()
{
	for (int i = 0; i < shapes.size(); i++)
	{
		shapes[i]->print();
	}
}

void ShapeContainer::printShapeInfo()
{
	for (int i = 0; i < shapes.size(); i++)
	{
		std::cout << shapes[i]->getLabel() << " - " << shapes[i]->getPerimeter() << std::endl;
	}
}
