#include <iostream>

/* Function template is a feature in languages like C++ that allows you to define a function once and
use it with different data types.*/


// Generic add function template
template <typename T> // "T" is reference of template for functions's and values's data type.
T add(T a, T b);

int main() {

    int a = 4;
    double b = 3;
    
    // it will be error because we cant use different data type in function.
    //std::cout << "Sum: " << add(a, b) << std::endl;

    // it will be working because we do explicitly changing "int" to "double" by <double> in function call.
    std::cout << "Sum: " << add<double>(a, b) << std::endl;
   
    return 0;
}

template <typename T>
T add(T a, T b) {
    return a + b;
}