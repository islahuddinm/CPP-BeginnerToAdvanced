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

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing shape..." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing circle..." << std::endl;
    }
};

int main() {
    // this is dynamic binding.
    Shape* shapePtr = new Circle(); // 'new 'operator in C++ is used to dynamically allocate memory for an object or an array of objects at runtime.
    // so new operator to create an object, the object is dynamically allocated on the heap at runtime.
    shapePtr->draw(); // Calls Circle::draw() dynamically

    Shape binding;
    // this would typically involve dynamic binding because it involves calling a member function ('draw()') on an object ('binding') using the dot operator.
    binding.draw();

    delete shapePtr;
    return 0;
}