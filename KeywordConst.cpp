#include <iostream>

int main(){

    //const (keyword specifies that a variable's value is constant) to tells the compiler to prevent anything from modifying it (read-only)

    double pi = 3.14159;
    const double RADIUS = 10;
    //RADIUS = 15; //variable is to modifie
    double circumference = 2 * RADIUS;

    std::cout << circumference << '\n';

    return 0; //a way for main function send the message to user that this task is success or there are problems.
}