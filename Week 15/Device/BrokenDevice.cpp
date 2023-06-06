
#include "BrokenDevice.h"

BrokenDevice::BrokenDevice() : Device()
{
	symptoms = nullptr;
	timeToFix = 0;
}

BrokenDevice::BrokenDevice(const char* _symptoms, int _timeToFix, const char* _brand, const char* _model, double _price) : Device(_brand, _model, _price)
{
	int size = strlen(_symptoms) + 1;
	symptoms = new char[size];
	strcpy_s(symptoms, size, _symptoms);

	timeToFix = _timeToFix;
}

BrokenDevice::BrokenDevice(const Device& other)
{
	Device::Device(other);
	copy(other);
}

BrokenDevice& BrokenDevice::operator=(const BrokenDevice& other)
{
	if (this != &other)
	{
		Device::operator=(other);
		erase();
		copy(other);
	}

	return *this;
}

BrokenDevice::~BrokenDevice()
{
	erase();
}

void BrokenDevice::copy(const BrokenDevice& other)
{
	int size = strlen(other.symptoms) + 1;
	symptoms = new char[size];
	strcpy_s(symptoms, size, other.symptoms);

	timeToFix = other.timeToFix;
}

void BrokenDevice::erase()
{
	delete[] symptoms;
	symptoms = nullptr;
	timeToFix = 0;
}
