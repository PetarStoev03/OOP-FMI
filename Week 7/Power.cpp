#include "Power.h"

Power::Power(const std::string& name, int damage) {
	this->name = name;
	this->damage = damage;
}

int Power::getDamage() const{
	return this->damage;
}

const std::string& Power::getName() const{
	return this->name;
}

bool Power::operator<(const Power& other) const{
	return this->damage < other.damage;
}