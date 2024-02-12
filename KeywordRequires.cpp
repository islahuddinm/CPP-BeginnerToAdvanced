#include <iostream>
#include <type_traits>

/* requires keyword is used in concepts, which are a feature introduced in C++20. Concepts allow you to
specify constraints on template parameters. The requires keyword is used to define these constraints
within the concept definition.*/

////////////////////////////////// this is concept in c++ //////////////////////////////////

//  a feature introduced in the C++20 standard that allows programmers to specify requirements on template arguments.
// if you want to run this program you have to use command line interface by using flags "g++ -std=c++23 yourfilename.cpp -o yourexecutablename.exe"

// syntax 1
template <typename T>
requires std::is_integral_v<T> // requires is keyword, std::integral is type trait(template class) check if a given type is integral. or w can use "std::is_integral_v".
T add(T a) {
    return a;
}

template <typename T>
requires std::integral<T>
T addd(T a) {
    return a;
}

// syntax 2
template <std::integral T>
T add2(T a) {
    return a;
}

// syntax 3
auto add3(std::integral auto a) { // to this syntax we have to use "auto" if it is not it will have error.
    return a;
}

// syntax 4
template <typename T>
T add4(T a) requires std::integral<T>{
    return a;
}

// syntax 5
std::integral auto add5(std::integral auto a) { // to this syntax we have to use "auto" if it is not it will have error.
    return a;
}

int main() {

    float a = 5.5; // it cant pass in function template because they just allow integer data type.
    int b = 5;

    std::cout << "syntax1 result : " << add(b) << '\n';
    std::cout << "syntax result : " << addd(b) << '\n';
    std::cout << "syntax2 result : " << add2(b) << '\n';
    std::cout << "syntax3 result : " << add3(b) << '\n';
    std::cout << "stntax4 result : " << add4(b) << '\n';
    std::cout << "stntax5 result : " << add5(b) << '\n';

    return 0;
}