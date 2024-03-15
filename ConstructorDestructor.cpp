#include <iostream>

/* Constructor (constructor is allow creat an object) is a special member function of a class that is
automatically called when an object of that class is created in main function.*/

/* destructor is a special member function of a class that is automatically called by the compiler runtime
when an object/constructor of a class that is called in main function to destroy object. but
in this case i dont make destructor to destroy object.*/

class number {
private: // it means only can use/access in local.

    double value;
    
public:  // it means only can use/access in another function.

    number(double num) { // Constructor
        value = num;
        std::cout << "Constructor executing!" << '\n';
        std::cout << "Number : " << value << '\n' << '\n';
    }

    ~number() { // Destructor is always have '~'(tilde sign) in prefix.
        std::cout << "Destructor executing!" << '\n';
        std::cout << "Number : " << value << '\n' << '\n';
    }

    /* rules : destructor, constructor name have to same with class name, destructor and constructor
    have no return types, destructor dont recieve any parameters, destructor have to only one destructor
    in per class.
    
    destructor run start from under to upper.*/
};

void test() {
    // we can do like this instead of 'number zero (0)' to define identifiers.
    number zero = number(0); // zero is name of object.
}

int main() {

    // we can do like this instead of 'number seven (7)' to define identifiers.
    number seven = number(7); // seven is name of object.
    number ten = number(10); // ten is name of object.
    
    test(); // function call

    return 0;
}