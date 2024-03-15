#include <iostream>

//expression(combination of value, variable, operator, and function that can be eveluated to produce a result)

//logical operator is used to check whether an expression is true or false.

// "&&" is logical operator "and"
// "||" is logical operator "or"
// "!" is logical operator "not" is the not logical operator that is used to reverse a logical state. for example, if condition is "True" it will be "False"

int main() {

    bool a = false;
    bool b = false;
    int x = 0;
    int y = 5;

    std::cout << " a && b : " << (x && y) << '\n';
    std::cout << " a && b : " << (x || y) << '\n';
    std::cout << " a && b : " << std::boolalpha << (a && b) << '\n'; //result is flase
    a = false; //reset
    b = true;
    std::cout << " a && b : " << std::boolalpha << (a && b) << '\n'; //result is flase
    a = true; //reset
    b = false;
    std::cout << " a && b : " << std::boolalpha << (a && b) << '\n'; //result is flase
    a = true; //reset
    b = true;
    std::cout << " a && b : " << std::boolalpha << (a && b) << '\n'; //result is true
    std::cout << '\n';

    a = false; //reset
    b = false;
    std::cout << " a || b : " << std::boolalpha << (a || b) << '\n'; //result is flase
    a = false; //reset
    b = true;
    std::cout << " a || b : " << std::boolalpha << (a || b) << '\n'; //result is true
    a = true; //reset
    b = false;
    std::cout << " a || b : " << std::boolalpha << (a || b) << '\n'; //result is true
    a = true; //reset
    b = true;
    std::cout << " a || b : " << std::boolalpha << (a || b) << '\n'; //result is true
    std::cout << '\n';

    a = false; //reset
    b = false;
    std::cout << " a || b : " << std::boolalpha << !(a || b) << '\n'; //result is true

    return 0;
}