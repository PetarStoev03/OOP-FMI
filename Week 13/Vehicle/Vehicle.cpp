#include "Vehicle.h"

Vehicle::Vehicle()
{
	power = 100;
	weight = 1500;
}

Vehicle::Vehicle(int _power, int _weight)
{
	power = _power;
	weight = _weight;
}

Vehicle::~Vehicle()
{
	power = 0;
	weight = 0;
}

int Vehicle::getPower() const
{
	return power;
}

int Vehicle::getWeight() const
{
	return weight;
}
