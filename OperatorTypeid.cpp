#include <iostream>
#include <typeinfo>

/* typeid is an operator in C++ that allows you to determine the type of an expression or a variable at runtime.
It returns a reference to a type_info object, which contains information about the type.
This operator is often used in conjunction with polymorphism to check the actual type of an object when
working with base class pointers.*/

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {};

int main() {
    Base* basePtr = new Derived();
    
    // Using typeid to check the actual type of the object
    if (typeid(*basePtr) == typeid(Derived)) {
        std::cout << "basePtr points to a Derived object\n";
    } else {
        std::cout << "basePtr does not point to a Derived object\n";
    }
    
    delete basePtr;
    return 0;
}