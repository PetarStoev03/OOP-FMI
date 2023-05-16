#include <iostream>
#include "Engine.h"
#include "FuelTank.h"
#include "Piston.h"
#include "Tire.h"
#include "Car.h"

int main()
{
	Tire tire1(120, 17, 55, "tire 1", "brand 1", 2016);
	Tire tire2(120, 17, 55, "tire 2", "brand 2", 2016);
	Tire tire3(120, 17, 55, "tire 3", "brand 3", 2016);
	Tire tire4(120, 17, 55, "tire 4", "brand 4", 2016);

	tire1.display();
	tire2.display();
	tire3.display();
	tire4.display();

	Piston piston1(120, 17, "piston 1", "brand 5", 2016);
	Piston piston2(120, 17, "piston 2", "brand 6", 2016);
	Piston piston3(120, 17, "piston 3", "brand 7", 2016);
	Piston piston4(120, 17, "piston 4", "brand 8", 2016);
	
	Engine engine(105, "engine 1", "brand 9", 2016);
	engine.addPiston(piston1);
	engine.addPiston(piston2);
	engine.addPiston(piston3);
	engine.addPiston(piston4);

	engine.display();

	Car car("BMW", "e6");
	
}