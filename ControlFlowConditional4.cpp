#include <iostream>

//ternary operator is conditional operator, is a shorthand way of expressing an if-else statement in C++.
//ternary operator can be used to replace an if..else statement in certain situations.

/*
below is ternary expression(a combination of values, variables, operators, and functions that can be evaluated to produce a result.)

result = (condition) ? expression1 : expression2 ;

*/

int max; //public variable

int a = 35; //public variable
int b = 20; //public variable

void function2();
void function3();
void function4();

int main() {
    
    if (a > b) {

        max = a;
    }

    else if (a < b) {

        max = b;
    }

    std::cout << "Maximum Value : " << max << '\n';

    function2();
    function3();
    function4();
    return 0;
}

void function2() {

    int max = (a < b) ? max=b : max=a ; //"if"(in left) is b, "else"(in right) is a. 'if'(true), 'else'(false)

    std::cout << "Maximum Value of Ternary : " << max << '\n';
}

void function3() {

    int result = (a > b) ? b : a ; //"if"(in left) is b, "else"(in right) is a.  'if'(true), 'else'(false)

    std::cout << "Maximum Value of Ternary : " << result << '\n';
}

void function4() { //ternary initialization

    bool fast = false;

    int speed = fast ? 100 : 150 ; //conditional is fast, "if"(in left) is 100, "else"(in right) is 150.  'if'(true), 'else'(false)

    std::cout << "Speed of Ternary : " << speed << '\n';
}