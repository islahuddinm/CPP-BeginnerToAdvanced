#include "car.h"
#include <iostream>
#include <string>
#ifndef CAR_CPP
#define CAR_CPP
/* #ifndef, #define, #endif (Header guards): These directives are used to prevent a header file from
being included multiple times in the same translation unit, which can lead to redefinition errors.

#ifndef (if not defined): Checks if a macro has not been defined. If the macro has not been defined, the code between #ifndef and #endif is processed.
#define: Defines a macro, usually used to define the macro checked by #ifndef.
#endif: Ends the conditional block.*/

//car.cpp file is to implement variables and fuctions in car.h file

car::car() // this constructor. Constructor name has to same with class name. "car::" represens class.
{
	name = "Spider 720"; // access member variable.
	acceleration = 5;
	speed = 340;
	brake = 86;
	handling = 73.6; // handling of private attribute.
	//this->nitro = 88; // this methode cant work to get handling.
}

float car::get_handling() // function to get "handling variable"
{
	return this->handling; //this is how are going to return our access to "handling" by doing step by step in "car.h file" before
	//actually without "this->" in c++23 we can keep access member variable.
}

void car::set_handling(float modify_handling_value) // function
{
	this->handling = modify_handling_value; //this is how are going to change value of "handling"
	//actually without "this->" in c++23 we can keep access member variable.
}

void car::run() // function
{
	std::cout << "Mclaren is running" << '\n';
}

car::car(int a, int b) // another way to creat constructure.
{
	speed = a;
	brake = b;
}

#endif