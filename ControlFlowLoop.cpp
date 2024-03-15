#include <iostream>
#include <array>

//types of loops

int main2();
int main3();
int main4();
int main5();

int main() {

    for (int i = 0; i <= 10; i+= 2)  //i < 10 is false (i > 10;), loop will not be executed
        std::cout << "loop1 value of i is : " << i << '\n';
    
    for (int i = 0; i <= 2; ++i)
        std::cout << "loop11 value of i is : " << i << '\n';

    std:: cout << '\n';

    main2();
    main3();
    main4();
    main5();
    return 0;
}

int main2() {

    int a = 26; //it's iterator (an object that can be used to loop through collections, like ArrayList and HashSet)

    while (a < 30) { //if it is false (a > 30;), loop will not be executed
    //while (int a = 28 < 30) {
        
        std::cout << "loop2 value of a is : " << a << "\n";
        a++; //increment is to go ahead to loop until limits is determined
    }

    std:: cout << '\n';

    return 0;
}

int main3() {

    int b = 8; // it is value start looping

    do {

        std::cout << "loop3 value of b is: " << b << '\n';
        b++; //increment is to go ahead to loop until limits is determined

    } while (b < 10); //if "10" of "(b < 10)" we change "false" value, loop will not be executed

    std:: cout << '\n';

    return 0;
}

int main4() {

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

int main5() { //loop scope outside

    const size_t arraySize = 7;
    int myArray[arraySize] = {10, 20, 30, 40, 50, 60, 70};

    size_t i = 0;

    for ( i; i <= arraySize; i++) { //"<=" it make more output of i value

        std::cout << "loop5 value of i is : " << i << " (" << myArray[i] << ")" << '\n';
    }
    std::cout << "loop5 value of i is : " << i << " (" << myArray[i] << ")" << '\n';

    return 0;
}