#include <iostream>

//function overloading is two or more functions can have the same name but different parameters.

/*
keep in mind "function cant have a same name" but why in below it can have no errors even though have a same name?
because they have different data types in function's and parameter's data type even though
have same function names.
*/

int minimum(int a, int b) {

    return std::min(a, b);
}

double minimum(double a, double b) {

    return std::max(a, b);
}

/* //////////////////////////////// below it will have error because it have same parameter data type exactly like function on the top.

double minimum(int a, int b) {

    return std::max(a, b);
}
*/

double minimum(int a, double b) {

    return a + b;
}

int main() {

    int value1 = 10;
    int value2 = 22;
    double value3 = 10;
    double value4 = 22;

    std::cout << "minimum (int) : " << minimum(value1, value2) << '\n';
    std::cout << "maximum (double) : " << minimum(value3, value4) << '\n';
    std::cout << "increment (int & double) : " << minimum(value2, value4) << '\n';

    return 0;
}