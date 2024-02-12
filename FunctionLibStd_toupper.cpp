#include <iostream>

void function2();

int main() {

    char ch = 'a';
    char upperCh = std::toupper(ch);
    
    std::cout << "Uppercase of " << ch << " : " << upperCh << std::endl;
    std::cout << '\n';

    ///////////////////////////////////////////////////////////////////

    char myArray[] = {"hello"};       
    
    for (char element : myArray) {

       char upper = std::toupper(element);

       std::cout << upper;
    } std::cout << '\n';

    std::cout << myArray << '\n';
    std::cout << '\n';

    function2();
    return 0;
}

void function2() {

    char myArray[] = {"hello"};
    char upper[std::size(myArray)];

    for (int i = 0; i < std::size(myArray); i++) {

        upper[i] = std::toupper(myArray[i]);
    }

    std::cout << upper << '\n';
    std::cout << upper[0] << upper[1] << '\n';
}