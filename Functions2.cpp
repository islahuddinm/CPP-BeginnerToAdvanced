#include <iostream>

int function2(int a, int b, int &output) {

    if (a > b) {
        output = a;
    }

    else {
        output = b;
    }
    
    return output;
}

std::string function3(std::string stringIn1, std::string stringIn2, std::string *stringOut) {

    if (std::size(stringIn1) > std::size(stringIn2)) {
        *stringOut = stringIn1;
    }

    else {
        *stringOut = stringIn2;
    }

    return *stringOut;
}

void function4(int a, int b, int &result) {

    if (a > b) {
        result = a;
    }

    else {
        result = b;
    }
           
}

int main() {

/////////////////////////////////////////////////////////connecting variable by pointer
    int output;
    int input1 = 20;
    int input2 = 30;

    function2(input1, input2, output);

    std::cout << "Maximal value = " << output << '\n';
    //std::cout << '\n';

/////////////////////////////////////////////////////////connecting variable by pointer
    std::string stringOut;
    std::string stringIn1 = "hello world";
    std::string stringIn2 = "hi";

    function3(stringIn1, stringIn2, &stringOut);

    std::cout << "Maximal string = " << stringOut << '\n';
    //std::cout << '\n';

/////////////////////////////////////////////////////////connecting variable by reference
    int result;
    int input3 = 25;
    int input4 = 35;

    function4(input3, input4, result);

    std::cout << "Maximal result = " << result << '\n';

    return 0;
}