/*
a programming paradigm is refer to style ore patern of how code should be structured, organized, and
how algorithms should be designed. it defines the structure, oraginization, and flow of code.

here are some key programming paradigms:

- imperative programming paradigm is type of paradigm that gives the computer step by step instructions
to execute.

- procedural programming paradigm is paradigm type that exrends the imprerative paradigm by orginizing
code into reusable block called procedures or functions.

- functional programming paradigm is paradigm type that treats computation as the evaluation of
mathematical functions and avoids changing-state and mutable data. it focuses on mathematical functions.

- Object-oriented programming (OOP) is a programming paradigm based on the concept of "objects,"
which can contain data in the form of fields (often known as attributes or properties) and code,
in the form of procedures (often known as methods).

there are the core principles of OOP: abstraction, encapsulation, inheritance, and polymorphism.
Object-oriented programming languages, such as C++, Java, and Python, support these concepts and
provide features that facilitate their implementation.

- declarative programming paradigm is a style of programming where you express the logic of
a computation without explicitly describing its control flow. In other words, instead of telling
the computer how to do something (as in imperative programming), you describe what you want to achieve,
and the computer figures out how to do it.
*/

////////////////////////////////////////////////////////////////// this is OOP programming paradigm

#include <iostream>
#include <string>

// Define the Car class
class Car {
  private:
    std::string brand;
    std::string model;
    int mileage;

  public:
    // Constructor to initialize the Car object
    Car(std::string b, std::string m, int mi) : brand(b), model(m), mileage(mi) {}

    // Method to display car details
    void displayDetails() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Mileage: " << mileage << " miles" << std::endl;
    }

    // Method to drive the car, increasing its mileage
    void drive(int distance) {
        mileage += distance;
        std::cout << "Driving " << distance << " miles. New mileage: " << mileage << " miles" << std::endl;
    }
};

int main() {
    // Create a Car object using the constructor
    Car myCar("Toyota", "Corolla", 50000);

    // Display the car details
    myCar.displayDetails();

    // Drive the car for 100 miles
    myCar.drive(100);

    return 0;
}