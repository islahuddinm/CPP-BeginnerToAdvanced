#include <iostream>

/* "blueprint" refers to the class definition itself. It's called a "blueprint" because
it specifies how objects of that class should be created and what properties and behaviors
they should have, similar to how a blueprint for a building specifies its design and construction details.
Once you have a blueprint (class), you can create multiple instances (objects) based on that blueprint,
each with its own unique set of data and behaviors.*/

//class(keyword) is a user-defined data type that serves(dipakai) as a blueprint for creating objects. class refer to template and than object represent instance of the class (example : car can be class's name and then object can be bmw, bugatti, etc.)
//car class has some attribute (name, prize, speed, color, etc.) and has some behaviour (drive, brake, change color, etc.) as well
//class is used as a template or blueprint for creating objects.

class cars {
    
public : // it means only can use/access in another function.
    /* member function are used to implement the behavior of the class and can access the
    class's member variables and other member functions.*/
    void behavior() {
        std::cout << "Mclaren is running" << '\n';
    }

public:
    // member variable is variables that are associated with a specific instance of a class (object) and hold the state or data for that object or frist declaration.
    std::string name; // you can use "std::string name;" instead of "std::string name = 0;"
    int acceleration;
    int speed;
    int brake;
    int handling;

};

int main() {
    // this is how to create object. or how to call default constructor.
    cars mclaren; //here "Mclaren" is object name/ a object that already made. "cars" is a class.
    
    // access member variable.
    mclaren.name = "Spider 720"; //here "name" is member variable/ attribute.
    mclaren.acceleration = 5;
    mclaren.speed = 340;
    mclaren.brake = 86;
    mclaren.handling = 73;

    mclaren.behavior();
    std::cout << '\n';

    std::cout << "Name : " << mclaren.name << '\n';
    std::cout << "Acceleration : " << mclaren.acceleration << '\n';
    std::cout << "Speed : " << mclaren.speed << '\n';
    std::cout << "Brake : " << mclaren.brake << '\n';
    std::cout << "Handling : " << mclaren.handling << '\n';

    return 0;
}