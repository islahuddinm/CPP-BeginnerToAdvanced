#include <iostream>

int function2();

int main() {

    int c = 1; //it's iterator (an object that can be used to loop through collections, like ArrayList and HashSet)

    do {

        std::cout << "value of c: " << c << '\n';
        c++;

        if (c == 10) {
            c++;

            continue; //it skip 10 value
        }

    } while (c < 20);

    function2();
    return 0;
}

int function2() {

    //size_t is not a type, just a type alias for some "unsigned int" representation
    //It is commonly used for indexing and representing the sizes of arrays, memory allocations, and other data structures.

    const size_t arraySize = 7;
    int myArray[arraySize] = {10, 20, 30, 40, 50, 60, 70};

    for (size_t i = 4; i < arraySize; i++) {

        std::cout << "loop4 value of i is : " << i << " (" << myArray[i] << ")" << '\n';
    }

    std:: cout << '\n';

    for (size_t i = 4; i < arraySize; i++) {

        std::cout << "loop4 value of i is : " << 2*i << " (" << myArray[i] << ")" << '\n';
    }

    std:: cout << '\n';

    return 0;
}