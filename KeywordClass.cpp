#include <iostream>

//class(keyword) is template(pattern used as a guide to make something) to creating object. class refer to template and than object represent instance of the class (example : car can be class's name and then object can be bmw, bugatti, etc.)
//car class has some attribute (name, prize, speed, color, etc.) and has some behaviour (drive, brake, change color, etc.) as well

class cars {

public:
    std::string name;
    int acceleration;
    int speed;
    int brake;
    int handling;

};

int main() {

    cars mclaren; //here "Mclaren" is object
    mclaren.name = "Spider 720";
    mclaren.acceleration = 5;
    mclaren.speed = 340;
    mclaren.brake = 86;
    mclaren.handling = 73;

    std::cout << "Name : " << mclaren.name << '\n';
    std::cout << "Acceleration : " << mclaren.acceleration << '\n';
    std::cout << "Speed : " << mclaren.speed << '\n';
    std::cout << "Brake : " << mclaren.brake << '\n';
    std::cout << "Handling : " << mclaren.handling << '\n';

    return 0;
}