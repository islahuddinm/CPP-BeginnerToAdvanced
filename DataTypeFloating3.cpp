#include <iostream>

int main() {

    /* std::showpoint is a manipulator in C++ that affects how floating-point values are printed when
    using streams, such as std::cout. When std::showpoint is set, it ensures that the decimal point and
    trailing zeros are always displayed, even if they are unnecessary for the precision of the value.
    This means that even if a floating-point value has no digits after the decimal point,
    the decimal point itself will still be displayed, along with any trailing zeros.*/

    double number = 10.5;

    // Without showpoint
    std::cout << "Without showpoint: " << number << std::endl;

    // With showpoint
    std::cout << "With showpoint: " << std::showpoint << number << std::endl;
    
    return 0;
}