#include <iostream>

/* Function template is a feature in languages like C++ that allows you to define a function once and
use it with different data types.

purpose is to avoid overload functions.*/


// Generic add function template
template <typename T> // "T" is reference of template for functions's and values's data type.
T add(T a, T b);

template <typename T>
T add2(T a, T b);

int main() {

    int a = 7;
    double b = 5.5;

    int sum1 = add(3, 4);
    double sum2 = add(3.5, 4.7);
    std::string combined = add2("Hello", "World");

    std::cout << "Sum1: " << add(a, b) << std::endl; // i have not found a way to execution different data types in function parameters implicitly
    std::cout << "Sum1: " << sum1 << std::endl; // Output: Sum1: 7
    std::cout << "Sum2: " << sum2 << std::endl; // Output: Sum2: 8
    std::cout << "Combined: " << combined << std::endl; // Output: Combined: Hello World

    return 0;
}

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T add2(T a, T b) {
    return a;
}

////////////////////// keep in mind in this case if we use 2 function template with same name (error) //////////////////////