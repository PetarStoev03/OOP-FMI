#include <string>
#include "CarPart.h"
#include <vector>

#ifndef CAR_H
#define CAR_H

class Car : CarPart
{
public:
	Car(std::string _brand, std::string _model);
	~Car();
	void displayCarParts() const;
	void addPart(const CarPart& part);

private:
	std::string brand;
	std::string model;
	int currentCount;
	int size;
	CarPart** parts;
};

#endif#pragma once
