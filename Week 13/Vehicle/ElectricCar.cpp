#include "ElectricCar.h"
#include <iostream>

ElectricCar::ElectricCar():Car()
{
}

ElectricCar::ElectricCar(const char* _brandAndModel, int _power, int _weight, std::string _owner, bool _tangible):Car(_brandAndModel, _power, _weight, _owner, _tangible)
{
}

ElectricCar::ElectricCar(const ElectricCar& other) : Car(other)
{
}

ElectricCar& ElectricCar::operator=(const ElectricCar& other)
{
	Car::operator=(other);

	return *this;
}

ElectricCar::~ElectricCar()
{
}

void ElectricCar::engineSound()
{
	std::cout << "No sound\n";
}
