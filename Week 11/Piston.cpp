#include "Piston.h"
#include <iostream>

Piston::Piston(int _diameter, int _stroke, std::string _name, std::string _brand, int _yearOfProduction) : CarPart(_name, _brand, _yearOfProduction)
{
	diameter = _diameter;
	stroke = _stroke;
}

void Piston::display() const
{
	std::cout << "Piston " << id << ':' << std::endl;
	std::cout << "--Name: " << name << std::endl;
	std::cout << "--Brand: " << brand << std::endl;
	std::cout << "--Year of production: " << yearOfProduction << std::endl;
	std::cout << "--Diameter: " << diameter << std::endl;
	std::cout << "--Stroke: " << stroke << std::endl;
}
