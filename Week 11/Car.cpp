#include "Car.h"
#include <iostream>

Car::Car(std::string _brand, std::string _model)
{
	brand = _brand;
	model = _model;
	size = 10;
	currentCount = 0;
}

Car::~Car()
{

}

void Car::displayCarParts() const
{
	std::cout << "Car: " << std::endl;
	std::cout << "--Brand: " << brand << std::endl;
	std::cout << "--Model: " << model << std::endl;
	std::cout << "--Parts: " << std::endl;
	for (int i = 0; i < currentCount; i++)
	{
		parts[i]->display();
	}
}

void Car::addPart(const CarPart& part)
{

	parts[currentCount] = part;
	currentCount++;
}
