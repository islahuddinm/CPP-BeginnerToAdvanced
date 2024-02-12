#include <iostream>

 /*Function Declaration: Informs the compiler about the existence and interface (signature) of a function.
 It is usually placed at the beginning of a program, in a header file, or before the main function.
 
 Function definition is definition of function declaration.
 
 Function Signature: Describes the name of the function, the number and types of its parameters, and
 its return type. It is used in the function declaration.*/

int function1(int a, int b); //function declaration/ prototype
int function2(); //function declaration/ prototype

int main() { //Function Signature

    //int a = 7;
    //int b = 77;
    
    function1(15, 4); //Funtion argument of Function Calls

    int sum = function2();
    std::cout << sum << '\n';
        
    return 0;
}


int function1(int a, int b) { //function definiton

    int substraction = a - b;
   
    std::cout << "the substraction of a and b is: " << substraction << '\n';

    return 0;
}

int function2() { //function definiton

    int substraction = 7 - 5;
   
    std::cout << "the substraction of a and b is: " ;

    return substraction;
    //return 7 - 5; //simple way
}