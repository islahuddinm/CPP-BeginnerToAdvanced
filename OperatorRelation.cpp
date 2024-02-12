#include <iostream>

int main() {

    int number1 = 45;
    int number2 = 60;

    std::cout << "Number1 : " << number1 << '\n';
    std::cout << "Number2 : " << number2 << '\n';
    std::cout << '\n';

    std::cout << "Comparing Number" <<'\n';

    std::cout << std::boolalpha; //it is a 1/0 manipulator that make show up as true/false instead of 1/0  
    std::cout << "Number1 < Number2 : " << (number1 < number2) <<'\n'; //there are no "()" the compiler will print number1 variable first they will not be done "number1 < number2"
    std::cout << "Number1 <= Number2 : " << (number1 <= number2) <<'\n';
    std::cout << "Number1 > Number2 : " << (number1 > number2) <<'\n';
    std::cout << "Number1 >= Number2 : " << (number1 >= number2) <<'\n';
    std::cout << "Number1 == Number2 : " << (number1 == number2) <<'\n';

    std::cout << "Number1 < Number2 : " << (number1 <! number2) <<'\n'; //"!" is the not logical operator that is used to reverse a logical state. for example, if condition is "True" it will be "False"

    return 0;
}