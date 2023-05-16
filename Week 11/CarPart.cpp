#include "CarPart.h"

int CarPart::partsCreated = 0;

CarPart::CarPart()
{
	name = "deffault";
	brand = "deffault";
	yearOfProduction = 2000;
	id = partsCreated;
}

CarPart::CarPart(std::string _name, std::string _brand, int _yearOfProduction)
{
	name = _name;
	brand = _brand;
	yearOfProduction = _yearOfProduction;
	id = partsCreated++;
}

CarPart::~CarPart()
{
}

int CarPart::getPartsCount()
{
	return partsCreated;
}
