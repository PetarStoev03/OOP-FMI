#include "Tire.h"
#include <iostream>

Tire::Tire(int _width, int _diameter, int _profile, std::string _name, std::string _brand, int _yearOfProduction) : CarPart(_name, _brand, _yearOfProduction)
{
	width = _width;
	diameter = _diameter;
	profile = _profile;
}

void Tire::display() const
{
	std::cout << "Tire " << id << ':' << std::endl;
	std::cout << "--Name: " << name << std::endl;
	std::cout << "--Brand: " << brand << std::endl;
	std::cout << "--Year of production: " << yearOfProduction << std::endl;
	std::cout << "--Width: " << width << std::endl;
	std::cout << "--Diameter: " << diameter << std::endl;
	std::cout << "--Profile: " << profile << std::endl;
}
