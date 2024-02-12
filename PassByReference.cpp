#include <iostream>

// reference is a variable which refers to another variable.

/* pass by reference is methode that C++ developers use to allow a function to modify a original variable without
having to create a copy of original variable. */

// Function definition
void increment(int &num) {
    num++; // Increment the value of num
}

int main() {
    int x = 5;

    std::cout << "Before increment: " << x << std::endl;
    
    // Call function takes x value to given to parameter/argument of "function definition" above
    increment(x);

    std::cout << "After increment: " << x << std::endl;

    return 0;
}

/* so, if we just increment using variable in another function the compiler doesnt know where value will be store and
then if we increment using reference in another function the compiler know where value will be store because we refered to
original variable.

When you pass a variable by reference to a function, you're essentially providing the function with the memory address where
that variable is stored. This allows the function to directly access and modify the original variable's value in memory.

In contrast, when you pass a variable by value (without using references), the function receives a copy of
the variable's value. Any changes made to the parameter inside the function only affect this local copy, not
the original variable in the calling code.

Passing by reference is particularly useful when you want to modify the original variable's value within a function and
have those changes reflected outside the function. It's also efficient in terms of memory usage since you're not making
unnecessary copies of variables. However, you need to be cautious when using references to ensure
that the referenced variable remains valid for the duration of its use. */