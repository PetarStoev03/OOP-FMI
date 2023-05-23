#include "Vehicle.h"
#include "Property.h"

#ifndef CAR_H
#define CAR_H

class Car : Vehicle, Property
{
public:
	Car();
	Car(const char* _brandAndModel, int _power, int _weight, std::string _owner, bool _tangible);
	Car(const Car& other);
	Car& operator=(const Car& other);
	~Car() override;
	virtual void startEngine() const override;
private:
	char* brandAndModel;
	void copy(const Car& other);
	void freeMemory();
};

#endif
