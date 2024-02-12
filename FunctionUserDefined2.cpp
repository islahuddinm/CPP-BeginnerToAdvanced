#include <iostream>

//compiler will always start to read top project to below then start to working in main fuction (int main)

int value(int first, int second) {

    int a = first + second;
    
    return a;
    //return first + second; //simple way
    }

int main() {

    int first {2}; //instead of variable "first = 2;"
    int second {5}; //instead of variable "first = 5;"
    int sum = first + second;
    
    std::cout << sum << '\n';

    sum = value (1,3);
    std::cout << "sum value is: " << sum << '\n';

    sum = value (4,8);
    std::cout << "sum value is: " << sum << '\n';

    return 0;
}