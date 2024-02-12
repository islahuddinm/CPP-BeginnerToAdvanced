#include <iostream>

int main(){

    //interger data type (numbers without decimal points)
    //float or double data type (numbers with decimal points)
    //character data type (single character)
    //boolean data type (true or false)
    //string data type (represents a sequence of text)
    
    int age = 25;
    int year = 2023;
    double day = 1.5;

    float price = 10.99;
    double temperature = 25.1;

    char grade = 'A';
    char dollarSign = '$';

    bool student = true;
    bool power = false;
    bool forSale = true;

    std::string name = "muhammad islahuddin";
    std::string nickName = "islah";
    std::string igName = "islahuddinm 001"; //you can include the number but it is treated differenly

    std::cout << day << '\n';
    std::cout << price << '\n';
    std::cout << temperature + age << '\n';
    std::cout << grade << '\n';
    std::cout << dollarSign << '\n';
    std::cout << power << '\n';
    std::cout << forSale << '\n';
    
    std::cout << "Hello " << name << '\n';
    std::cout << age << " years old" << '\n';
    std::cout << igName << '\n';

    return 0;
}