#include "Hogwarts.h"

Hogwarts::Hogwarts() {
	capacity = 1000;
	currCount = 0;
	students = nullptr;
}

void Hogwarts::copy(const Hogwarts& other) {
	currCount = other.currCount;
	capacity = other.capacity;
	students = new Student [capacity];

	for (int i = 0; i < currCount; i++)
	{
		students[i] = other.students[i];
	}
}

void Hogwarts::destroy() {
	delete[] students;
	students = nullptr;
	currCount = 0;
	capacity = 0;
}

Hogwarts::Hogwarts(const Hogwarts& other) {
	copy(other);
}

Hogwarts::Hogwarts(Hogwarts&& other) {
	currCount = other.currCount;
	capacity = other.capacity;
	students = other.students;

	other.currCount = 0;
	other.capacity = 0;
	other.students = nullptr;
}

Hogwarts& Hogwarts::operator=(const Hogwarts& other) {
	if (this != &other)
	{
		destroy();
	}

	copy(other);

	return *this;
}

Hogwarts& Hogwarts::operator=(Hogwarts&& other) {
	if (this != &other)
	{
		destroy();
	}

	currCount = other.currCount;
	capacity = other.capacity;
	students = other.students;

	other.currCount = 0;
	other.capacity = 0;
	other.students = nullptr;

	return *this;
}

Hogwarts::~Hogwarts() {
	destroy();
}

void Hogwarts::addStudent(const Student& student) {
	if (capacity == currCount + 1)
	{
		if (capacity != 0){
			capacity *= 2;
		}
		else {
			capacity = 2;
		}

		Student* copy = new Student[capacity];
		for (int i = 0; i < currCount; i++)
		{
			copy[i] = students[i];
		}
		delete this->students;
		this->students = copy;
	}

	students[currCount++] = student;
}

void Hogwarts::assignHouse(const std::string& studentName, const std::string& house) const {
	for (int i = 0; i < currCount; i++)
	{
		if (studentName == students[i].getName())
		{
			students[i].setHouse(house);
			break;
		}
	}
}

void Hogwarts::givePower(const std::string& name, const Power& power) const {
	for (int i = 0; i < currCount; i++)
	{
		if (name == students[i].getName())
		{
			students[i].setPower(&power);
			break;
		}
	}
}

std::ostream& operator<<(std::ostream& out, const Hogwarts& hogwarts)
{
	for (int i = 0; i < hogwarts.currCount; i++)
	{
		out << hogwarts.students[i].getName() << "from" << hogwarts.students[i].getHouse();
	}
}
