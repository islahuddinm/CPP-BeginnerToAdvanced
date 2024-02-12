#include <iostream>

//keyword is all reserved words in programing language (if, else, while, class, return, auto, etc.)
//data types are classifications that specify what type of data a variable can hold. (int, char, float, double, bool, etc.)

//auto is a keyword used for type inference, let compiler deduce the type

int main() {

    auto var1 {12}; //it is represent integer
    auto var2 {13.7}; //it is represent double
    auto var3 {14.3f}; //it is represent float
    auto var4 {15.6l}; //it is represent long double
    auto var5 {'e'}; //it is represent character

    //int modifire suffixes
    auto var6 {280u}; //unsigned
    auto var7 {280ul}; //unsigned long
    auto var8 {280ll}; //long long

    std::cout << "Size of var1 : " << sizeof(var1) << " bytes\n";
    std::cout << "Size of var2 : " << sizeof(var2) << " bytes\n";
    std::cout << "Size of var3 : " << sizeof(var3) << " bytes\n";
    std::cout << "Size of var4 : " << sizeof(var4) << " bytes\n";
    std::cout << "Size of var5 : " << sizeof(var5) << " bytes\n";
    std::cout << '\n';
    
    std::cout << "Size of var6 : " << sizeof(var6) << " bytes\n";
    std::cout << "Size of var7 : " << sizeof(var7) << " bytes\n";
    std::cout << "Size of var8 : " << sizeof(var8) << " bytes\n";

    return 0;
}