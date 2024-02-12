#include <iostream>

//compiler will always start to read top project to below then start to working in main fuction (int main)

//output methods

int main() {

    std::cout << "hallo " << '\n'; //c output

    int age {25};
    std::cout << "age : " << age << '\n'; //c output

    std::cerr << "error message : something when wrong!" << '\n'; //c error (typically used to intended for the developer or the person)

    std::clog << "log message : something happened" << '\n'; // c log (output information about warnings or other critical events during program execution)

    return 0;
}