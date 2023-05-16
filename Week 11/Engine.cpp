#include "Engine.h"
#include <iostream>
Engine::Engine(int _power, std::string _name, std::string _brand, int _yearOfProduction) : CarPart(_name, _brand, _yearOfProduction)
{
	power = _power;
}

void Engine::display() const
{
	std::cout << "Engine " << id << ':' << std::endl;
	std::cout << "--Name: " << name << std::endl;
	std::cout << "--Brand: " << brand << std::endl;
	std::cout << "--Year of production: " << yearOfProduction << std::endl;
	std::cout << "--Power: " << power << std::endl;
	std::cout << "--Pistons: " << std::endl;

	for (int i = 0; i < pistons.size(); i++)
	{
		pistons[i].display();
	}
}

void Engine::addPiston(const Piston& piston)
{
	pistons.push_back(piston);
}
