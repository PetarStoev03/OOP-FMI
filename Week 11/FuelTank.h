#include <string>
#include <iostream>
#include "CarPart.h"
#include "Piston.h"
#include <vector>

#ifndef FUEL_TANK_H
#define FUEL_TANK_H

template <typename T>
class FuelTank : CarPart
{
public:
	FuelTank(int _volume, T _fuelType, std::string _name, std::string _brand, int _yearOfProduction) : CarPart(_name, _brand, _yearOfProduction)
	{
		volume = _volume;
		fuelType = fuelType;
	}
	
	void FuelTank::display() const
	{
		std::cout << "Fuel tank " << id << ':' << std::endl;
		std::cout << "--Name: " << name << std::endl;
		std::cout << "--Brand: " << brand << std::endl;
		std::cout << "--Year of production: " << yearOfProduction << std::endl;
		std::cout << "--Volume: " << volume << std::endl;
		std::cout << "--Fuel type: " << fuelType << std::endl;
	}

private:
	int volume;
	T fuelType;
};

#endif