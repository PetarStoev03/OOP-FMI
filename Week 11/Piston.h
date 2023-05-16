#include <string>
#include "CarPart.h"

#ifndef PISTON_H
#define PISTON_H

class Piston : CarPart
{
public:
	Piston(int _diameter, int stroke, std::string _name, std::string _brand, int _yearOfProduction);
	void display() const override;

private:
	int diameter;
	int stroke;
};

#endif