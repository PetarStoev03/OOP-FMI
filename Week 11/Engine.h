#include <string>
#include "CarPart.h"
#include "Piston.h"
#include <vector>

#ifndef ENGINE_H
#define ENGINE_H

class Engine : CarPart
{
public:
	Engine(int _power, std::string _name, std::string _brand, int _yearOfProduction);
	void display() const override;
	void addPiston(const Piston& piston);
private:
	int power;
	std::vector<Piston> pistons;
};

#endif