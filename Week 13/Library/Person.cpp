#include "Person.h"

Person::Person(const std::string& _name) : BasePerson(_name)
{

}

BasePerson* Person::clone() const
{
	return new Person(*this);
}
