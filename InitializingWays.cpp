#include <iostream>

//ways to initialize variable

int main() {

    int a = 2.5; //assignment initialization
    int b (2.5); //functional initialization or parentheses
    int c {2.5}; //bracet initialization or curly bracet (it is to prevent narrow contruction). if we run list initialization, it will be error because data type is 'int' not 'double'.

    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';

    return 0;
}