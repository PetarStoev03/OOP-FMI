#include "Shoe.h"

void Shoe::copy(const Shoe& other) {
	manufacturer = other.manufacturer;
	model = other.model;
	price = other.price;
	rating = other.rating;
	count = other.count;
}

void Shoe::destroy() {
	price = 0;
	rating = 0;
	count = 0;
}

Shoe::~Shoe() {
	destroy();
}

Shoe& Shoe::operator=(Shoe const& other) {
	if (this != &other)
	{
		destroy();
		copy(other);
	}

	return *this;
}

Shoe::Shoe(std::string manufacturerData, std::string modelData,
	double priceData, double ratingData, int countData) {
	manufacturer = manufacturerData;
	model = modelData;
	price = priceData;
	rating = ratingData;
	count = countData;
}