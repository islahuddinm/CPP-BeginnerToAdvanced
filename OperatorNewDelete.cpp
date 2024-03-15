#include <iostream>

/* 'new' is operator used to allocate memory of data type then memory allocation is used to store value
at the runtime(period compile).

if we assign a value to a variable that was already declared (without using new), the memory address of
the variable and value remain the same. The assignment operation simply changes the value that is stored at
the memory address, so we have a same memory address.

However, when we use 'new', we allocate memory for an type on the heap(memory stock have not been used)
to store value. so variable and value have a different memory address.*/

/* 'delete' is a operator in C++ used to deallocate memory that was previously allocated using the
new operator. Using 'delete' is important to manage memory efficiently and avoid memory leaks in
your program.*/

int main() {
    
    // this is assignment without using 'new'.
    int x; // Memory for x is allocated
    x = 32; // Assigning a value to x
    // 'int x = new int(32);' we can also assign like this.
    std::cout << "Memory address of 'x' and '32' : " << &x << '\n';
    // variable(x) stores value(32), so it has same memory address.

    // this is assignment using 'new'.
    int* p = new int; // Allocate memory for an integer on the heap(memory stock have not been used).   
    *p = 42; // Assigning a value to the allocated memory by 'new int;' then the value(42) is placed to the allocated memory.
    // we can also assign like this 'int* p = new int(42);' instead of above.
    std::cout << "Memory address of 'p' : " << &p << '\n';    
    std::cout << "Memory address of 'new int;' and '42' : " << p << '\n';
    // variable(p) stores allocated memory of the heap, so it has no same memory address.

    // 'delete operator' in below just deallocate memory this assignment, dont deallocate assignment above.
    p = new int;   
    *p = 10;    
    std::cout << "Memory address of 'p' : " << &p << '\n';    
    std::cout << "Memory address of 'new int;' and '10' : " << p << '\n';

    delete p; /* operator in C++ used to deallocate memory. it is used to avoid memory leaks. when we
    dont use 'delete' we will have stack of usless memorys. example without using 'delete' :
    when we assign '*p = 42' then '*p = 30' and
    then '*p = 50' we will have usless stack they are first and second assignment.*/

    // below how to use 'new' and 'delete' using array ///////////////////////////////////////////////////

    double *array = new double[4];
    array[0] = 5;
    array[1] = 6;
    array[2] = 7;
    array[3] = 8;

    for (int i = 0; i < 4; ++i) {
        std::cout << "Array [" << i << "] = " << array[i] << '\n';
    }

    delete[] array; // used to deallocate array memory.
    array = nullptr; // assignment is to not pointing anyting to avoid any issues.

    return 0;
}