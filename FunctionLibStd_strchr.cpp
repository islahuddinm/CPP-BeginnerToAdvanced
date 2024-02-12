#include <iostream>
#include <cstring>

/*
In C++, std::strchr is a function provided by the C++ Standard Library, specifically within the <cstring> header.
It is used for finding the first occurrence of a character in a C-style string (null-terminated character array).
*/

void function2();
void function3();
void function4();

int main() {
    
    const char *str = "Hello, World!";
    char target = 'r';

    const char *result = std::strchr(str, target);

    std::cout << "std::strchr result : " << result << '\n'; //result is found "world"(1)
    std::cout << "std::strchr result : " << !result << '\n'; //result is found "zero"(0) because reverted with !

    if (result != nullptr) {
        //offset is amount or distance which something is out of line/ amount of diminish distance
        //(result - str) calculates the offset of the character found (result) within the original string (str).
        std::cout << "Character '" << target << "' found at position: " << (result - str) << std::endl;
        /*
        result is a pointer to the location of the character 'r' within the string, and
        str is a pointer to the beginning of the string.
        So, (result - str) gives the number of characters (or elements) between the start of the string and
        the found character. (result - str) go right to left.
        */
    }
    
    else {
        std::cout << "Character '" << target << "' not found in the string." << std::endl;
    }

    const char *full = "Hello, World!"; //we can also do "full[]" instead of "*full"
    char goal = 'd';

    const char *hasil = std::strchr(full, goal);
    
    std::cout << std::endl;
    std::cout << "'d' found at position: " << (hasil - full) << std::endl;
    std::cout << std::endl;

    function2();
    function3();
    function4();
    return 0;
}

void function2() {

    const char *str = "Try not. Do, or do not. There is no try.";
    char target = 'T';

    //const char *result = str;
    //const char *result = std::strchr(str, target);

    int iterations = 0;

    while ((str = std::strchr(str, target)) != nullptr) { //Loop until strchr returns nullptr (no more occurrences of 'T'). Loop until strchr returns nullptr (no more occurrences of 'T') it means nullptr in the end of array, which means that it has reached the end of the C-style string (character array) and found no more occurrences of the specified character ('T' in this case).
    //while (result != nullptr) {

        std::cout << "found '" << target << "' starting at '" << str << "'\n"; //Print the found character and its starting position
        ++str; //Move the result pointer to the next character

        std::cout << "str: " << str << std::endl;
        std::cout << std::endl;
        
        ++iterations; //Increment the iteration count
    }

    std::cout << "iterations : " << iterations << '\n';
    
    std::cout << '\n';
    std::cout << "//////////////////////////////////////////////////////////////////////////////////2" << '\n';
    std::cout << '\n';
    
}

void function3() {

    const char *str = "Try not. Do, or do not. There is no try.";
    char target = 'T';

    str++;        
    
    std::cout << ((str = std::strchr(str, target)) == nullptr) << '\n'; //result is '0'(false) because it is not equal
    std::cout << !(str = std::strchr(str, target)) << '\n'; //actual result is '1' but it's inverted be '0'(false)
    std::cout << str << '\n';

    const char strr[] = "Try not. Do, or do not. There is no try.";
    char targett = 'T';
    
    int i = 0;
    i++;

    strr[i];
    
    std::cout << strr[i] << '\n';

    std::cout << '\n';
    std::cout << "//////////////////////////////////////////////////////////////////////////////////3" << '\n';
    std::cout << '\n';
}

void function4() { // another way find occurrences of a specific character (target) in a C-style string (str).

    const char *str = "Try not. Do, or do not. There is no try.";
    char target = 'T';

    //const char *result = str;
    //const char *result = std::strchr(str, target);
    
    
    int iterations = 0;

    for (;(str = std::strchr(str, target)) != nullptr; ++str) { //Loop until strchr returns nullptr (no more occurrences of 'T'). Loop until strchr returns nullptr (no more occurrences of 'T') it means nullptr in the end of array, which means that it has reached the end of the C-style string (character array) and found no more occurrences of the specified character ('T' in this case).
    //while (result != nullptr) {

        std::cout << "found '" << target << "' starting at '" << str << '\n'; //Print the found character and its starting position
                       
        ++iterations; //Increment the iteration count
    }

    std::cout << "iterations : " << iterations << '\n';
    
    std::cout << '\n';
    std::cout << "//////////////////////////////////////////////////////////////////////////////////4" << '\n';
    std::cout << '\n';
    
}