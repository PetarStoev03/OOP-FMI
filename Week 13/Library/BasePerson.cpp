#include "BasePerson.h"

int BasePerson::egn = 0;

BasePerson::BasePerson(const std::string& _name)
{
	egn++;
	name = _name;
}