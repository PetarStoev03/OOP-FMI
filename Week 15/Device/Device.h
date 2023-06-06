#include<string>
#include<iostream>

#ifndef DEVICE_H
#define DEVICE_H

class Device
{
public:
	Device();
	Device(const char* _brand, const char* _model, double _price);
	Device(const Device& other);
	Device& operator= (const Device& other);
	virtual ~Device();

private:
	void copy(const Device& other);
	void erase();
	char* brand;
	char* model;
	double price;
};
#endif