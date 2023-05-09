#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle();
	Rectangle(std::string _label, double _longSide, double _shortSide);
	~Rectangle() override;
	std::string getLabel();
	void print() override;
	double getPerimeter() override;
	Shape* copy() const;

private:
	std::string label;
	double longSide;
	double shortSide;
	double perimeter = 0;
};

#endif // !CIRCLE_H
