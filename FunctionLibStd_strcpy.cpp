#include <iostream>
#include <cstring> // Include the header for strcpy

/*std::strcpy is a C++ standard library function that stands for "string copy."
It is used to copy a C-style string (a null-terminated character array) from the source to the destination.*/

int main() {
    const char source[] = "Hello, World!"; // Source string
    char destination[20]; // Destination array with enough space

    std::strcpy(destination, source); // Copy the string from source to destination

    std::cout << "Source: " << source << std::endl;
    std::cout << "Destination: " << destination << std::endl;

    return 0;
}