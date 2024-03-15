#include <iostream>
#include <typeinfo>

// Base class Shape with a pure virtual function draw
class Shape {
public:
    virtual ~Shape() {} // Virtual destructor for proper cleanup
    virtual void draw() const = 0; // Pure virtual function
};

// Derived class Rectangle that implements draw
class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a rectangle\n";
    }
};

int main() {
    // Creating a pointer to a Shape object that actually points to a Rectangle object
    Shape* shape_rect = new Rectangle();

    // Using typeid to get the dynamic type of the object pointed to by shape_rect
    // typeid(*shape_rect) returns a reference to a type_info object that represents the dynamic type
    // typeid(*shape_rect).name() returns a C-style string representing the name of the dynamic type
    std::cout << "Dynamic type of shape_rect : " << typeid(*shape_rect).name() << std::endl;

    delete shape_rect; // Clean up the allocated memory
    return 0;
}

/* In this example, the 'Shape' class is an abstract base class with a pure virtual function 'draw()'.
The 'Rectangle' class is derived from 'Shape' and implements the 'draw()' function.

In 'main()', we create a pointer 'shape_rect' of type 'Shape*', which actually points to a 'Rectangle' object.
When we use 'typeid(*shape_rect).name()', we're asking for the name of the dynamic type of the object pointed to
by 'shape_rect'. The 'typeid(*shape_rect)' part returns a 'type_info' object that represents this dynamic type,
and 'name()' returns a C-style string with the type's name.

Note that the output of 'typeid(...).name()' is implementation-defined and may not be very readable.
In many implementations, it returns something like "class Rectangle", but this can vary.*/