#include <iostream>
#include <string>
#include "Car.h"

int main() {

	car mclaren = car(); //this constructor ("car();") in car.cpp that construct object is called "mclarent". this constructor ("car();") is calling "car::car()" in car.cpp file.

	mclaren.speed = 310; //i modife speed of "car::car()" in car.cpp file that is "340" be "310"

	std::cout << "Name  : " << mclaren.name << '\n';
	std::cout << "Acceleration  : " << mclaren.acceleration << '\n';
	std::cout << "Speed  : " << mclaren.speed << '\n';
	std::cout << "Handling  : " << mclaren.get_handling() << '\n'; //this output is to get "private handling"
	//std::cout << "Nitro  : " << mclaren.nitro << '\n';
	std::cout << '\n';

	mclaren.set_handling(50.2);
	
	std::cout << "Change Handling Value" << '\n';
	std::cout << "Handling  : " << mclaren.get_handling() << '\n';
	std::cout << '\n';

	mclaren.run();
	std::cout << '\n';

	car bugatti = car(60, 75); // another way to creat constructure.

	std::cout << "Name  : Bugatti" << '\n';
	std::cout << "Speed  : " << bugatti.speed << '\n';
	std::cout << "Brake  : " << bugatti.brake << '\n';
	std::cout << '\n';

	car* car_pointer = &mclaren;
	int* speed_pointer = &mclaren.speed;
		
	std::cout << "Mclaren memory address : " << car_pointer << '\n';
	std::cout << "Speed memory address : " << speed_pointer << '\n';
	std::cout << "Speed values got through pointer : " << (*car_pointer).speed << '\n';
	std::cout << "Speed values got through 'DashGreaterThan' : " << car_pointer->speed << '\n';

	// create bugatti new values.
	car* car_pointer2 = new car(55, 105);

	std::cout << "Bugatti speed values got through 'DashGreaterThan' : " << car_pointer2->speed << '\n';

	return 0;
}