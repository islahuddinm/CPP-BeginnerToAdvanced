#include <iostream>
#include <utility>

/* std::pair is a template class in C++ that allows you to store a pair of values, which can be of
different types. It's part of the Standard Template Library (STL) and is defined in the <utility> header.*/

int main() {
    std::pair<int, double> myPair(1, 3.14);
    std::cout << "First value: " << myPair.first << std::endl;
    std::cout << "Second value: " << myPair.second << std::endl;

    return 0;
}

/* In this example, myPair is a pair of values: an int (1) and a double (3.14). You can access the first value
using myPair.first and the second value using myPair.second.*/