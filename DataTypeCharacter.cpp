#include <iostream>

//character data type is used to store single character

int main() {

    char value = 65; //"65" in ASCII(American Standard Code for Information Interchange) is character code for 'A'
    
    char character1 = 'a';
    char character2 = 'r';
    char character3 = 'r';
    char character4 = 'o';
    char character5 = 'w';
    char *character6 = "hallo"; // so if we give asterisk in the variable will hold address of every character that have same address. it dont hold anymore a single character.

    std::cout << "Value : " << value << '\n';
    std::cout << "Value(int) 'A' character : " << static_cast<int>(value) << '\n'; // "static_cast" is a unary operator which one data type to be converted into another data type
    std::cout << "Value(int) 'a' character : " << static_cast<int>(character1) << '\n';
    std::cout << '\n';
    
    std::cout << character1 << '\n';
    std::cout << character2 << '\n';
    std::cout << character3 << '\n';
    std::cout << character6 << '\n';

    return 0;
}