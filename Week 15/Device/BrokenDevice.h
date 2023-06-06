
#include "Device.h"

#ifndef BROKEN_DEVICE_H
#define BROKEN_DEVICE_H

class BrokenDevice :
    public Device
{
public:
	BrokenDevice();
	BrokenDevice(const char* _symptoms, int _timeToFix, const char* _brand, const char* _model, double _price);
	BrokenDevice(const Device& other);
	BrokenDevice& operator= (const BrokenDevice& other);
	~BrokenDevice();

private:
	void copy(const BrokenDevice& other);
	void erase();
    char* symptoms;
    int timeToFix;
};

#endif // !BROKEN_DEVICE_H
