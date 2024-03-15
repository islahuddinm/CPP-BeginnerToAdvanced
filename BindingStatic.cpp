#include <iostream>

/* Before getting to static binding & dynamic binding, we need to understand the concept of binding.
When we create a function, we have two crucial things:-

A function definition - defines a procedure to execute.
A function call - invokes the respective function for implementation.
    
Now both the function definition and function calls are stored in the memory at separate addresses. And our
program can have more than one function for its smooth operation. Hence, we need a technique to match the
appropriate function call with its definition.

The process of matching a specific function call to its respective function definition is known as binding.
But why is this of such interest? A lot can be utilized using the two kinds of binding: static binding & dynamic binding.
    
binding is needed to link a function call with its function definition accurately.
When this binding occurs at Compile time, we call it a Static Binding, and
when this binding occurs at Runtime, we call it a Dynamic Binding.*/

class Base {
public:
    void display() {
        std::cout << "Base class display() called." << std::endl;
    }
};

class Derived : public Base {
public:
    void display() {
        std::cout << "Derived class display() called." << std::endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    Base *ptr = &derivedObj; // Pointer of Base type pointing to Derived object

    // Static binding: Resolved at compile time based on the pointer type (Base)
    ptr->display(); // This will call Base::display(), not Derived::display()

    return 0;
}
