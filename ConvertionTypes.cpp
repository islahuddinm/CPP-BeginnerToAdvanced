#include <iostream>
#include <string>

void function2();
void function3();
void function4();

int main() { //C-style cast (conversion type)

    int x = 3.14; //implicit (conversion type understood direcly by compiler without stating any statement)

    double y = (int) 3.17; //explicit (conversion type by stating direcly)
    
    std::cout << x << '\n';
    std::cout << y << '\n';
    
    double a = 5.14;
    double b = (int) a;

    std::cout << b << '\n';
    std::cout << '\n';

    function2();
    function3();
    function4();
    return 0;
}

void function2() { //C++ cast operator (conversion type)

    double intValue = 42.72;
    double doubValue = static_cast<int>(intValue);

    std::cout << doubValue << '\n';
    std::cout << '\n';
}

void function3() { //Functions for converting strings to integers, floats, doubles, and vice versa. (conversion type)

    std::string strValue = "42.5";
    int intValue = std::stoi(strValue);
    double doubleValue = std::stod(strValue);

    std::cout << "Converted values: " << intValue << " and " << doubleValue << std::endl;
    std::cout << '\n';
    
}

void function4() { //Functions for converting strings to integers, floats, doubles, and vice versa. (conversion type)

    double doubleValue = 42.5;
    //int intValue = std::to_integer<int>(doubleValue);

    std::cout << "Converted values: " << std::endl;
    std::cout << '\n';
    
}