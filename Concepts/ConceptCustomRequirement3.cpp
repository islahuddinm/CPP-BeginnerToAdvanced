#include <iostream>

// built custom concept
template <typename T>
concept TinyType = requires (T a) {
    requires sizeof(T) <=4; // nested requirement to checks if the expression is true/ fullfill requirement.
    // if it is just "size()" cant be constraint.
};

//////////////////////////////////////////////////////////////////////////////////// border

// syntax 1
template <typename T>
requires std::integral<T> || std::floating_point<T> // just allow int or float value. "||"(or opetator)
T intfloat(T a) {
    return a;
}

// execute combination custom concept by syntax 1
template <typename T>
requires std::integral<T> && TinyType<T> // just allow int value and a size of value is less or equal 4 bytes. "&&"(and opetator).
T intfloat2(T a) {
    return a;
}

int main() {

    double x = 50;
    double y = 60;

    std::cout << "result : " << intfloat(x) << '\n';
    //std::cout << "result : " << intfloat2(y) << '\n'; // it will error because it is not satisfying requirement.

    return 0;
}