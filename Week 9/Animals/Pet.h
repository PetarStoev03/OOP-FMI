#ifndef PET_H
#define PET_H
#include "Animal.h"

class Pet : public Animal
{
public:
	Pet();
	Pet(char* _ownerName, unsigned _ownerPhoneNumber, char* _petName, unsigned _petAge);
	Pet(const Pet& other);
	Pet& operator=(const Pet& other);
	~Pet();
	void ChangeOwner(unsigned phoneNumber, char* name);
	void Print();

private:
	char* ownerName;
	unsigned ownerPhoneNumber;
	void copy(const Pet& other);
	void freeMemory();
};
#endif
