#include <iostream>
#include <array>

int main() {

    //size_t is not a type, just a type alias for some "unsigned int" representation
    //It is commonly used for indexing and representing the sizes of arrays, memory allocations, and other data structures.

    const size_t arraySize = 7;
    int myArray[arraySize] = {10, 20, 30, 40, 50, 60, 70};

    for (size_t i = 4; i <= arraySize; i++) { //"<=" it make more output of i value

        std::cout << "loop4 value of i is : " << i << " (" << myArray[i] << ")" << '\n';
    }

    std:: cout << '\n';

    return 0;
}