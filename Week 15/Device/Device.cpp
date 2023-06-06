#include "Device.h"

Device::Device()
{
	brand = nullptr;
	model = nullptr;
	price = 0;
}

Device::Device(const char* _brand, const char* _model, double _price)
{
	int brandLength = strlen(_brand) + 1;
	int modelLength = strlen(_model) + 1;

	brand = new char[brandLength];
	strcpy_s(brand, brandLength, _brand);

	model = new char[modelLength];
	strcpy_s(model, modelLength, _model);

	price = _price;
}

Device::Device(const Device& other)
{
	copy(other);
}

Device& Device::operator=(const Device& other)
{
	if (this != &other)
	{
		erase();
		copy(other);
	}

	return *this;
}

Device::~Device()
{
	erase();
}

void Device::copy(const Device& other)
{
	int brandLength = strlen(other.brand) + 1;
	int modelLength = strlen(other.model) + 1;

	brand = new char[brandLength];
	strcpy_s(brand, brandLength, other.brand);

	model = new char[modelLength];
	strcpy_s(model, modelLength, other.model);

	price = other.price;
}

void Device::erase()
{
	delete[] brand;
	brand = nullptr;

	delete[] model;
	model = nullptr;

	price = 0;
}
