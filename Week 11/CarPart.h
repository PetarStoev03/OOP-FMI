#include <string>
#ifndef CAR_PART_H
#define CAR_PART_H

class CarPart
{
public:
	CarPart();
	CarPart(std::string _name, std::string _brand, int _yearOfProduction);
	virtual ~CarPart();
	virtual void display() const = 0;
	static int getPartsCount();

protected:
	std::string name;
	std::string brand;
	int yearOfProduction;
	int id;
	static int partsCreated;
};

#endif