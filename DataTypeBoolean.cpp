#include <iostream>

//boolean is data type that has two values "true" & "false"

int main() {

    bool redLight = true;
    bool greenLight = false;

    if(greenLight == true) {

        std::cout << "Go through!" << '\n';
    }

    else if(redLight == true) {

        std::cout << "Stop!" << '\n';
    }

    else {
        std::cout << "Go!Go!Go!" << '\n';
    }
    
    std::cout << "True boolean value : " << redLight << '\n';
    std::cout << "False boolean value : " << greenLight << '\n';
    std::cout << '\n';
    
    std::cout << std::boolalpha;
    std::cout << "Original value : " << redLight << '\n';
    std::cout << "Original value : " << greenLight << '\n';
    std::cout << '\n';

    std::cout << "Size of boolean : " << sizeof(redLight) << " byte (8 bit)" << '\n';

    return 0;
}