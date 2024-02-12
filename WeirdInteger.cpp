#include <iostream>

//weird integer type is if do operation it will have weird result if do integer types less than 4 bytes in size don't support arithmetic operations

int main() {

    short int var1 = 10;
    short int var2 = 20;

    char var3 = 40;
    char var4 = 40;

    std::cout << "Size of var1 : " << sizeof(var1) << '\n';
    std::cout << "Size of var2 : " << sizeof(var2) << '\n';
    std::cout << "Size of var3 : " << sizeof(var3) << '\n';
    std::cout << "Size of var4 : " << sizeof(var4) << '\n';

    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    std::cout << "Size of result1 : " << sizeof(result1) << '\n';
    std::cout << "Size of result1 : " << sizeof(result1) << '\n'; //have weird result

    return 0;
}