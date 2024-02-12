#include <iostream>

//inside parentheses/ parameter can only be integer data type and enum(enumeration)
//enum is a keyword to make a user-defined data type that allows you to define a set of constants/ enumerator
//constant/ enumerator is a value that cannot be modified

enum day {

    sunday, //0 (this values assigned to these constants/ enumerator(sunday, monday, etc.))
    monday, //1
    tuesday, //2
    wednesday, //3
    thursday, //4
};

int main() {

    day today = monday;

    switch(today) {

        case 0:
            std::cout << "the value is sunday" << '\n';
            break;

        case 1:
            std::cout << "the value is monday" << '\n';
            break;
        
        case 2:
            std::cout << "the value is tuesday" << '\n';
            break;

        case 3:
            std::cout << "the value is wednesday" << '\n';
            break;

        case 4:
            std::cout << "the value is thursday" << '\n';
            break;

        default:
            std::cout << "the default was executed" << '\n';
            break;
    }

    return 0;
}