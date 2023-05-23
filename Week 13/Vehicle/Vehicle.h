#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
public:
	Vehicle();
	Vehicle(int _power, int _weight);
	virtual ~Vehicle();
	virtual void startEngine() const = 0;
	int getPower() const;
	int getWeight() const;
private:
	int power;
	int weight;
};

#endif // !VEHICLE_H
