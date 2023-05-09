#include "Shape.h"
#include <vector>
#ifndef SHAPE_CONTAINER_H
#define SHAPE_CONTAINER_H

class ShapeContainer
{
public:
	~ShapeContainer();
	void AddShape(const Shape& shape);
	void printShapes();
	void printShapeInfo();
private:
	std::vector<Shape*> shapes;
};
#endif // !SHAPE_CONTAINER_H
