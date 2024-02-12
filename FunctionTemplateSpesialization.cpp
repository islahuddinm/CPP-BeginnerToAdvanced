#include <iostream>
#include <cstring> // for strlen

/* function template specialization is alternative of generic function template if there are cases/ errors.
or when we want to provide a specialized implementation for certain types or values.

so actually function template specialization is exactly same with regular function and
they have exactly same function like regular function but they just have different syntax.*/



// Generic function template
template<typename T>
void printValue(const T& value) {
    std::cout << "Generic: " << value << std::endl;
}

// Function template specialization for std::string
template<>
void printValue<std::string>(const std::string& value) {
    std::cout << "Specialized: [" << value << "]" << std::endl;
}

int main() {
    int intValue = 42;
    double doubleValue = 3.14;
    std::string stringValue = "Hello, world!";
    std::string stringValue2 = "Hello";
    
    // Using the generic printValue function template
    printValue(intValue); // Output: Generic: 42
    printValue(doubleValue); // Output: Generic: 3.14
    
    // Using the specialized printValue function template for std::string
    printValue(stringValue); // Output: Specialized: [Hello, world!]
    printValue(stringValue2);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
///// actually this function template specialization there are no differences with regular function /////
/////////////////////////////////////////////////////////////////////////////////////////////////////////
