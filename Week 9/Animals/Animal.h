#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:
	Animal();
	Animal(char* _name, unsigned _age);
	~Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	void ChangeName(char* newName);

protected:
	char* name;
	unsigned age;

private:
	void copy(const Animal& other);
	void freeMemory();
};

#endif