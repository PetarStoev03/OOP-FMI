#include <string>
#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
	Shape();
	Shape(std::string _label);
	virtual ~Shape();
	std::string getLabel();
	virtual void print() = 0;
	virtual double getPerimeter() = 0;
	virtual Shape* copy() const = 0;

protected:
	std::string label;
	double perimeter;
};
#endif // !SHAPE_H
