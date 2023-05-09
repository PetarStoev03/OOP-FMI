#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape
{
public:
	Triangle();
	Triangle(std::string _label, double _height, double _side);
	~Triangle() override;
	std::string getLabel();
	void print() override;
	double getPerimeter() override;
	Shape* copy() const;

private:
	std::string label;
	double height;
	double side;
	double perimeter = 0;
};

#endif // !CIRCLE_H
