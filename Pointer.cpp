#include <iostream>

//pointer is a special variable(variable that have asterisk(*)) that stores the memory address of another variable as its value
//null pointer (nullptr) is value that does not point/store to any memory location.
//keep in mind! if data type of pointer is integer they just can store integer variable
int main() {

    //int *nullPointer = nullptr;
    int *nullPointer; //it will initialize automatically a nullptr

    int a = 5;
    int b = 8;
    int *pointerTo_a = &a; //"*pointerTo_a" is a pointer(a variable that stores the memory address of another variable as its value). "&" is a operator to get address of variables
    //int *pointerTo_a = b; //this is not working/ the result is wrong because its value is not variable

    std::cout << "the memory address of 'a' variable is " << pointerTo_a << '\n';
    std::cout << "the memory address of 'pointerTo_a' is " << &pointerTo_a << '\n';
    std::cout << "the value of a is " << *pointerTo_a << '\n'; //when we want to value result of "a" we have to give "*" in the baginning because we use pointer variable
    std::cout << "the memory address of 'a' variable is " << &a << '\n'; //"&" is a operator to get address of variables
    std::cout << '\n';

    pointerTo_a = &b;

    std::cout << "the value of a is " << pointerTo_a << '\n';
    std::cout << "the value of a is " << *pointerTo_a << '\n'; //when we want to value result of "a" we have to give "*" in the baginning because we use pointer variable
    std::cout << "the memory address of a variable is " << pointerTo_a << '\n'; //pointerTo_a is variable stored memory address of a
    std::cout << '\n';

    /*int *pointerValue = 15; //this is not working/ the result is wrong because its value is not variable

    std::cout << "the value of a is " << pointerValue << '\n';
    std::cout << "the value of a is " << *pointerValue << '\n';
    std::cout << "the memory address of a variable is " << pointerValue << '\n';*/

    return 0;
}