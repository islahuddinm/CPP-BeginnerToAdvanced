#include <iostream>
#include <cstring>

//std::strlen is a function that is used to determine the length of a null-terminated character arrays (a C-style string or a sequence of characters in memory where the end of the string is marked by the null character ('\0').).

/*
Keep in mind that std::strlen only works with null-terminated strings,
and it counts characters until the null terminator is encountered
*/

int main() {

    char *myString = "Hello, World";
    size_t length = std::strlen(myString);

    std::cout << "Length of string : " << length << '\n'; //result of "Hello,World" is 12 characters(space is also character)
    std::cout << "Length of string : " << std::strlen(myString) << '\n'; //another way

    return 0;
}