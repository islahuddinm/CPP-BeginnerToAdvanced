#include <iostream>
#include <cstring>

//std::strcat is a function that is used to concatenate (append) one C-style string to the end of another.

/*Here, destination is a array to the destination C-style string (the one to which the source string will be appended),
and source is a pointer to the source C-style string (the string to be appended to the destination).*/

int main() {

    char destination[] = "Hello, ";
    const char* source = "world!";

    //std::strcat(destination, source);

    //std::cout << "Concatenated string: " << destination << std::endl;
    std::cout << "Concatenated string: " << std::strcat(destination, source) << std::endl;

    char destinationn[] = "Hello, ";
    const char sourcee[] = "world! ";
    const char sourcee2[] = "Bye";
    
    std::strcat(destinationn, sourcee);
    std::strcat(destinationn, sourcee2);
    std::strcat(destinationn," goodbye");

    std::cout << "Concatenated string: " << destinationn << std::endl;
    std::cout << std::endl;

    char destinationnn[] = "Hello, ";
    const char sourceee[] = "world! ";

    std::strncat(destinationnn, sourceee, 2); //std::strncat allow me specify how many character we want to concatenate source string

    std::cout << "Concatenated string: " << destinationnn << std::endl;
    std::cout << std::endl;

    return 0;
}

void function2() {

}