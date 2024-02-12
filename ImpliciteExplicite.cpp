#include <iostream>

//compiler will always start to read top project to below then start to working in main fuction (int main)

//type convertion = conversion a value of one data type to another. there are implicit (autometic) and explicit (precede value with new data type "int")

int main() {

    int x = 3.14; //implicit (conversion type understood direcly by compiler without stating any statement)
    double y = (int) 3.17; //explicit (conversion type by stating direcly)
    double z = static_cast<int>(3.17); //explicit (conversion type by stating direcly)

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';

    return 0; //a way for main function send the message to user that this task is success or there are problems.
}