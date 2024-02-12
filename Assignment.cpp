#include <iostream>

int main() {

    int var1 {12}; //declare and initialize
    std::cout << var1 << '\n';

    var1 = 20; //assignment
    std::cout << var1 << '\n';

    bool state {false}; //declare and initialize
    std::cout << std::boolalpha << state << '\n';

    state = true; //assignment
    std::cout << state << std::boolalpha << '\n';
    
    return 0;
}