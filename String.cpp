#include <iostream>

//Strings are objects that represent sequences of characters.
//std::string: It is a class from the C++ Standard Library that represents a sequence of characters.

/*difference 'char' and 'std::string' is 'char' is just store one character in a size of 1 byte or 8 bit and
'std::string' can store multiple character in a size*/

int main() {

    std::string full_name; //empety string
    std::string planet = "earth. where the sky is blue"; //iniutalize with string
    std::string prefered_planet = planet;
    std::string meassage = {"hello there", 2}; //initialize with part of string

    std::string weird_message = {5, 'e'}; //initialize with multiple copies of a character

    std::string greeting = {"hello world",7,5}; //initialize string. printout starting at index 7, taking 5 characters.
    std::string hai = {"hello world"};
    std::string sayHai = {hai, 1, 10}; //initialize with part of an existing std::string. printout starting at index 1, taking 10 characters.

    std::cout << "full name : " << full_name << '\n';
    std::cout << "planet : " << planet << '\n';
    std::cout << "prefered planet : " << prefered_planet << '\n';
    std::cout << "message : " << meassage << '\n';
    std::cout << '\n';
    std::cout << "weird message : " << weird_message << '\n';
    std::cout << '\n';
    std::cout << "greeting : " << greeting << '\n';
    std::cout << "greeting : " << sayHai << '\n';

    return 0;
}