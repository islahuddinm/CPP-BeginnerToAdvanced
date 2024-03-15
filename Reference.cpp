#include <iostream>

//pointer is a variable that stores the memory address of another variable as its value
//reference is a variable which refers to another variable.

int main2();

int main() {

    int a = 5;
    int b = 7;
    
    int &refTo_a = a; //reference can not be nol (refTo_a = ;) reference to need another variable. so "refTo_a" alias of "a" or "a" is "refTo_a"

    std::cout << "the value of a is " << a << '\n';
    std::cout << "the value of ref_to a is " << refTo_a << '\n';
    std::cout << "the value of a is " << &a << '\n';
    std::cout << "the value of ref_to a is " << &refTo_a << '\n';
    std::cout << '\n';

    refTo_a = b;

    std::cout << "the value of a is " << a << '\n'; //why i give "a" in output but the result is "b"? because "reTo_a" is actually "a" i have changed variable "a" to "refTo_a"
    std::cout << "the value of ref_to a is " << refTo_a << '\n';
    std::cout << '\n';

    // output below have same address memory "refTo_a" is actually "a" variable
    std::cout << "the memory address of a is " << &a << '\n';
    std::cout << "the memory address of refTo_a is " << &refTo_a << '\n';
    std::cout << '\n';

    main2();
    return 0;
}

int main2() {

    int value = 4;
    int result = value;

    std::cout << "the memory address of value is " << &value << '\n';
    std::cout << "the memory address of result is " << &result << '\n';

    return 0;
}