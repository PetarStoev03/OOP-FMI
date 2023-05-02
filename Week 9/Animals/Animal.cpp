#include "Animal.h"
#include <string.h>

Animal::Animal()
{
	name = nullptr;
	age = 0;
}

Animal::Animal(char* _name, unsigned _age)
{
	int size = strlen(_name) + 1;
	name = new char[size] {};
	strcpy_s(name, size, _name);

	age = _age;
}

Animal::~Animal()
{
	freeMemory();
}

Animal::Animal(const Animal& other)
{
	copy(other);
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		freeMemory();
		copy(other);
	}

	return *this;
}

void Animal::ChangeName(char* newName)
{
	int size = strlen(newName) + 1;
	name = new char[size];
	strcpy_s(name, size, newName);
}

void Animal::copy(const Animal& other)
{
	int size = strlen(other.name) + 1;
	name = new char[size];
	strcpy_s(name, size, other.name);

	age = other.age;
}

void Animal::freeMemory()
{
	delete[] name;

	name = nullptr;
	age = 0;
}
