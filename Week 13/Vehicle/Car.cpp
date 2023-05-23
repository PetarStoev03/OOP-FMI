#include "Car.h"
#include <string.h>
#include <iostream>

Car::Car() : Vehicle(), Property()
{
	brandAndModel = nullptr;
}

Car::Car(const char* _brandAndModel, int _power, int _weight, std::string _owner, bool _tangible) : Vehicle(_power, _weight), Property(_owner, _tangible)
{
	int size = strlen(_brandAndModel) + 1;
	brandAndModel = new char[size];

	strcpy_s(brandAndModel, size, _brandAndModel);
}

Car::Car(const Car& other) : Vehicle(other), Property(other)
{
	copy(other);
}

Car& Car::operator=(const Car& other)
{
	if (this != &other)
	{
		Vehicle::operator=(other);
		Property::operator=(other);

		freeMemory();
		copy(other);
	}

	return *this;
}

Car::~Car()
{
	freeMemory();
}

void Car::startEngine() const
{
	int charCount = getPower() / 30;
	std::cout << "Vr";
	for (int i = 0; i < charCount; i++)
	{
		std::cout << 'o';
	}
	std::cout << "m\n";
}

void Car::copy(const Car& other)
{
	int size = strlen(other.brandAndModel) + 1;
	brandAndModel = new char[size];

	strcpy_s(brandAndModel, size, other.brandAndModel);
}

void Car::freeMemory()
{
	delete[] brandAndModel;
}
