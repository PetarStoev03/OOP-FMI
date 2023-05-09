#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

const double PI = 3.14;

class Circle : public Shape
{
public:
	Circle();
	Circle(std::string _label, double _radius);
	~Circle() override;
	std::string getLabel();
	void print() override;
	double getPerimeter() override;
	Shape* copy() const override;

private:
	std::string label;
	double radius;
	double perimeter = 0;
};

#endif // !CIRCLE_H
