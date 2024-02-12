#include <iostream>
#include <type_traits>

/* A type trait in C++ is a template class used to check if a given type is integral, meaning it's
a built-in integer type like int, long, short, char, etc at compile time.
It's a part of the <type_traits> header in the C++ Standard Library. */

int main() {

    /* in type trait "value" refers to a static member variable of each type trait class.
    This member variable holds the result of the trait's evaluation for the specified type.
    
    WE cannot modify or change this value at runtime. It's simply a compile-time constant representing
    the result of the type trait evaluation.*/

    std::cout << std::boolalpha;
    std::cout << "Is int an integral type? " << std::is_integral<int>::value << std::endl;
    std::cout << "Is float a floating-point type? " << std::is_floating_point<float>::value << std::endl;
    std::cout << "Is char* a pointer type? " << std::is_pointer<char*>::value << std::endl;
    std::cout << '\n';
    std::cout << "Is int convertible to float? " << std::is_convertible<int, float>::value << std::endl;
    std::cout << "Is int the same as float? " << std::is_same<int, float>::value << std::endl;
    std::cout << '\n';
    std::cout << std::boolalpha;
    std::cout << "Is int const? " << std::is_const<int>::value << std::endl;
    std::cout << "Is int a reference type? " << std::is_reference<int>::value << std::endl;
    std::cout << "Is int an array type? " << std::is_array<int>::value << std::endl;
    
    return 0;
}