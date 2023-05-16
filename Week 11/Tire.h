#include <string>
#include "CarPart.h"

#ifndef TIRE_H
#define TIRE_H

class Tire : CarPart
{
public:
	Tire(int _width, int _diameter, int _profile, std::string _name, std::string _brand, int _yearOfProduction);
	void display() const override;

private:
	int width;
	int diameter;
	int profile;
};

#endif