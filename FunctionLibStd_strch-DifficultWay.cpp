#include <iostream>
#include <cstring>

int main() {

    const char *str = "Try not. Do, or do not. There is no try.";
    char target = 'T';

    const char *result = str;
    //const char *result = std::strchr(str, target);

    int iterations = 0;

    while ((result = std::strchr(result, target)) != nullptr) { //Loop until strchr returns nullptr (no more occurrences of 'T')
    //while (result != nullptr) {

        std::cout << "found '" << target << "' starting at '" << result << "'\n"; //Print the found character and its starting position
        ++result; //Move the result pointer to the next character

        std::cout << "str: " << result << std::endl;
        std::cout << std::endl;
        
        ++iterations; //Increment the iteration count
    }

    std::cout << "iterations : " << iterations << '\n';
    
//////////////////////////////////////////////////////////////////////////////////////////////////////
    const char *strr = "Try not. Do, or do not. There is no try.";
    char targett = 'T';

    const char *resultt = str;

    const char *resulttttttt = std::strchr(resultt, targett);
    const char *resulttt = std::strchr(strr, targett);

    std::cout << '\n';
    std::cout << "//////////////////////////////////////////////////////////////////////////////////" << '\n';
    std::cout << "resulttttttt : " << resulttttttt << '\n';
    std::cout << "resulttt : " << resulttt << '\n';
}