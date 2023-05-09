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
	virtual void print();
	virtual double getPerimeter();
	virtual Shape* copy() const;

protected:
	std::string label;
	double perimeter;
};
#endif // !SHAPE_H
