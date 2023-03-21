#include <string>
#ifndef SHOE_H
#define SHOE_H

class Shoe
{
private:
	std::string manufacturer;
	std::string model;
	double price;
	double rating;
	int count;

	void copy(const Shoe& other);
	void destroy();

public:
	Shoe();
	Shoe(std::string manufacturerData, std::string modelData,
		double priceData, double ratingData, int countData);
	Shoe& operator=(Shoe const& other);
	~Shoe();
};

#endif