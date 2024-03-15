#include <iostream>

// pointer is a variable that stores the memory address of another variable as its value.

/* pass by pointer is methode that C++ developers use to allow a function to modify a original variable without
having to create a copy of original variable */

void incrementByPointer(int *ptr); // function declaration/prototype

int main() {
    int num = 5;

    std::cout << "Before increment: " << num << std::endl;

    // Call Function to takes address of "num variable" to given to parameter of "void incrementByPointer(int *ptr)"
    incrementByPointer(&num);

    std::cout << "After increment: " << num << std::endl;

    return 0;
}

// Function definition to takes address in parameter/argument of "incrementByPointer(&num);" function
void incrementByPointer(int *ptr) {
    
    (*ptr)++; // modify original value of main function
}

/* so, if we just increment using variable in another function the compiler doesnt know where value will be store and
then if we increment using pointer in another function the compiler know where value will be store because we given address.

When you pass a variable with value to a function, the compiler creates a copy of that variable within the function's scope.
Any modifications made to the parameter inside the function only affect the copy, not the original variable.

However, when you pass a pointer to a variable (pass by pointer), you're essentially passing the memory address of
the variable. This allows the function to directly access and modify the value stored at that memory address there
by affecting the original variable.

In the case of passing by pointer, the compiler indeed knows the memory address where the value is stored because
you explicitly provide the address of the variable when calling the function. This allows the function to access and
modify the variable's value at that specific memory address. */