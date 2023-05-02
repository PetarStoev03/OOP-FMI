#include "Pet.h"
#include <string.h>
#include <iostream>

Pet::Pet() : Animal() {

	ownerName = nullptr;
	ownerPhoneNumber = 0;
}


Pet::Pet(char* _ownerName, unsigned _ownerPhoneNumber, char* _petName, unsigned _petAge) 
	: Animal(_petName, _petAge) {
	int size = strlen(_ownerName) + 1;
	ownerName = new char[size];
	strcpy_s(ownerName, size, _ownerName);
	ownerPhoneNumber = _ownerPhoneNumber;
}

Pet::Pet(const Pet& other) : Animal(other)
{
	copy(other);
}

Pet& Pet::operator=(const Pet& other)
{
	if (this != &other)
	{
		Animal::operator=(other);

		freeMemory();
		copy(other);
	}

	return *this;
}

Pet::~Pet() {
	freeMemory();
}

void Pet::ChangeOwner(unsigned phoneNumber, char* name)
{
	int size = strlen(name) + 1;
	ownerName = new char[size];
	strcpy_s(ownerName, size, name);
	ownerPhoneNumber = phoneNumber;
}

void Pet::Print() {
	std::cout << "Pet name: " << name << std::endl;
	std::cout << "Pet age: " << age << std::endl;
	std::cout << "Owner name: " << ownerName << std::endl;
	std::cout << "Owner phone number: " << ownerPhoneNumber << std::endl;
}

void Pet::copy(const Pet& other) {
	int size = strlen(ownerName) + 1;
	ownerName = new char[size];
	strcpy_s(ownerName, size, other.ownerName);
	ownerPhoneNumber = other.ownerPhoneNumber;
}

void Pet::freeMemory() {
	delete[] ownerName;
	ownerPhoneNumber = 0;
	ownerName = nullptr;
}