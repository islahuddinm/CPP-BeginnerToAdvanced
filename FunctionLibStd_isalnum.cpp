#include <iostream>

    //std::isalnum is a function in C++ that is part of the <cctype> header.
    //it is used to check if the input value is either "an alphabet or a number" (alphanumeric).
    //"an alphabet or a number" (alphanumeric. which means it is either a letter (a-z or A-Z) or a digit (0-9).).

void function2();

int main() {

    char myChar = 'A';

    if (std::isalnum(myChar)) {
        std::cout << myChar << " is alphanumeric." << std::endl;
    }
    
    else {        
        std::cout << myChar << " is not alphanumeric." << std::endl;
    }

    int myNum = 0xf;

    if (std::isalnum(myNum)) {
        std::cout << myNum << " is alphanumeric." << std::endl;
    }
    
    else {        
        std::cout << myNum << " is not alphanumeric." << std::endl;
    }

    function2();
    return 0;
}

void function2() {

    char message[] = {"hai, can you help me? please!"};

    int noNumeric = 0;
    int wrong = 0;

    for (size_t i = 0; i < std::size(message); i++) { //"std::size()" gives the number amount of elements in a container

        if (std::isalnum(message[i])) {

            std::cout << "no numeric\n";
            
            ++noNumeric;
        }

        else {

            std::cout << "there is something wrong\n";

            ++wrong;
        }
    }

    std::cout << "amount of no numeric : " << noNumeric << '\n';
    std::cout << "amount of wrongs : " << wrong << '\n';
}