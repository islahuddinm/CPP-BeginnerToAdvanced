#include <iostream>
#include <iomanip>

/* std::fixed is a manipulator in C++ used with output streams (like std::cout) to format
floating-point numbers to be displayed in fixed-point notation. By default, floating-point numbers are
displayed in scientific notation (e.g., 1e+05), which is useful for large or small numbers but
can be less readable for general purposes.

When you use std::fixed, it tells the stream to display floating-point numbers in a fixed decimal notation
(e.g., 100000). This can be particularly useful when you want to display numbers with a
specific number of decimal places. Here's a simple example:

Fixed-point notation refers to a method of representing and working with numbers where the position of
the radix point (or decimal point) is fixed within the representation. */

/* precision  is indicates how many digits the value can have after the decimal point.
OR precision can means : float has 7 precision. it mean float can just output precisely 7 digits after
7 digits the next number will not exact.*/

int main() {
    
    long double number = 123.456789;
    long double number2 = 1000000000;
    
    // Display the number without std::fixed
    std::cout << "Without std::fixed: " << number << std::endl;
    std::cout << "Without std::fixed: " << number2 << std::endl << std::endl;

    // Display the number with std::fixed
    std::cout << "With std::fixed: " << std::fixed << number << std::endl;
    std::cout << "With std::fixed: " << std::fixed << std::setprecision(0) << number2 << std::endl  << std::endl;
    std::cout.unsetf(std::ios::fixed); //it is to disable std::fixed
        
    return 0;
}