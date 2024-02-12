#include <iostream>

/* Function template is a feature in languages like C++ that allows you to define a function once and
use it with different data types.

purpose is to avoid overload functions.*/


///////////////////////////// below how to get same address in another function /////////////////////////////

template <typename T>
T add(T a, T b);

template <typename T>
T add2(T &a, T &b);

int main() {

    double a = 5.3;
    double b = 3.3;   
    
    std::cout << "Outside address : " << &a << std::endl;
    add(a, b);
    std::cout << "Outside address : " << &a << std::endl;
    add2(a, b);
    
    return 0;
}

template <typename T>
T add(T a, T b) {
    std::cout << "Inside address : " << &a << " (different address)" << '\n';
    return 0;
}

template <typename T>
T add2(T &a, T &b) {
    std::cout << "Inside address : " << &a << " (same address)" << '\n';
    return 0;
}