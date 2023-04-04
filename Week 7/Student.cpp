#include "Student.h"

Student::Student() {
	this->name = "";
	this->house = "";
	this->power = nullptr;
	this->health = 100;
}

Student::Student(const std::string& name) {
	this->name = name;
	this->house = "";
	this->power = nullptr;
	this->health = 100;
}

const std::string& Student::getName() const{
	return this->name;
}

const std::string& Student::getHouse() const {
	return this->house;
}

void Student::setHouse(const std::string& house) {
	this->house = house;
}

int Student::getHealth() const {
	return this->health;
}

void Student::takeDamage(int damage) {
	this->health -= damage;
}

void Student::setPower(const Power* power) {
	this->power = power;
}

const Power* Student::getPower() const {
	return this->power;
}

bool Student::isAlive() const {
	return this->health <= 0;
}

int Student::attack() const {
	if (power==nullptr)
	{
		return 0;
	}
	return power->getDamage();
}