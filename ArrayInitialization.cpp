#include <iostream>
#include <array>

//range based loop

void function();
void function2();

int main() {

    int arrays[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int element : arrays) { //"element" is represent values(1,2,3,and so on) in arrays. arrays is container/ range of values

        std::cout << "Loop1 value : " << element << '\n'; //this body will run for each elements        
    }

    std::cout << '\n';

    for (int element : {1,3,5,6,4}) {

        std::cout << "Loop2 value : " << element << '\n';      
    }

    std::cout << '\n';

    function();
    function2();
    return 0;
}

void function() {

    std::array<int, 20> myArray = {9, 8, 7, 6, 5}; //std::array is a container that holds a fixed-size sequence of elements of type "int" and the size is 20. myArray is name container

    std::cout << "Elements of array : ";

    for (int element : myArray) {

        std::cout << element << ", ";
    }
    
    std::cout << '\n';
    std::cout << '\n';
}

void function2() {

    char myArray[] = {"Hello"};

    int countFind = 0;
    int countElement = 0;
    int countUpper = 0;
    
    for (char element : myArray) {

        if (element == 'l') {

            countFind++;         
        }

        countElement++;
    } countElement--;

    for (char element : myArray) {

        if (std::isupper(element)) {

            countUpper++;         
        }

    }

    std::cout << "'l' character is found : " << countFind << '\n';
    std::cout << "'upperchase' character is found : " << countUpper << '\n';
    std::cout << "amount of element : " << countElement << '\n';
    std::cout << '\n';
}