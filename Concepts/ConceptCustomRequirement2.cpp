#include <iostream>

// built custom concept
template <typename T>
concept TinyType = requires (T a) {
    requires sizeof(T) <=4; // nested requirement to checks if the expression is true/ fullfill requirement.
    // if it is just "size()" cant be constraint.
};

// built combination requirement custom concept
template <typename T>
concept Addable = requires (T a, T b) {
    {a + b} noexcept-> std::convertible_to<int>; // "noexcept" is a keyword used as a specifier to declare that a function does not throw exceptions.  
    // "std::convertible_to<int>" is concept introduced in C++20 as part of the Concepts library. It ensures that a type can be converted to another type using implicit conversions. However, if we use string type, it would result in a compilation error because a string is not convertible to an integer.
    // "{a + b} noexcept-> std::convertible_to<int>" it's requirement. type is must addable, does not throw exception, and the result is convertible to "int".
};

//////////////////////////////////////////////////////////////////////////////////// border

// execute custom concept by syntax 1
template <typename T>
requires TinyType<T>
T function(T a) {
    return sizeof(a);    
}

template <typename T>
requires TinyType<T>
T function2(T a) {
    return a;
}

// execute conpound requirement custom concept by syntax 1
template <typename T>
requires Addable<T>
T function3(T a) {
    return a;
}

int main() {

    double a = 5; // it will get errors because its size is more than 4 byte which it is not qualifying.
    char b = 100;
    int c = 150;
    std::string d = "150";

    //std::cout << "size(double) result : " << function(a) << '\n';
    std::cout << "(char) size less/equal than 4 : " << function(b) << '\n';
    std::cout << "(char) value result : " << function2(b) << '\n';
    std::cout << "(int) size less/equal than 4 : " << function(c) << '\n';
    std::cout << "(int) value result : " << function2(c) << '\n';
    std::cout << '\n';
    std::cout << "(char) addable value result : " << function3(b) << '\n';
    //std::cout << "(string) addable value result : " << function3(d) << '\n'; // it will be error because type cant be addable & convertible.

    return 0;
}