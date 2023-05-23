#include "Property.h"

Property::Property()
{
	owner = "Default";
	tangible = false;
}

Property::Property(std::string _owner, bool _tangible)
{
	owner = _owner;
	tangible = _tangible;
}

Property::~Property()
{
	tangible = false;
}

std::string Property::getOwner() const
{
	return owner;
}

bool Property::getTagible() const
{
	return tangible;
}
