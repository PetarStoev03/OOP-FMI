#include "Car.h"
#ifndef ELECTRIC_CAR_H
#define ELECTRIC_CAR_H

class ElectricCar : Car
{
public:
	ElectricCar();
	ElectricCar(const char* _brandAndModel, int _power, int _weight, std::string _owner, bool _tangible);
	ElectricCar(const ElectricCar& other);
	ElectricCar& operator=(const ElectricCar& other);
	~ElectricCar() override;
	void engineSound();
private:

};

#endif
