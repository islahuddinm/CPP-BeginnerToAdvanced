#include <iostream>

//  Lambda Functions are anonymous functions means that the function is without a name.

/*
lamda function signature :

[capture list] (parameters) ->return type{
    ///// function body /////
}

*/

int main() {

    double a = 10;
    double b = 20;


    // this how we use capture lists"[]".
    auto lambFunc = [a, b](){ 
        std::cout << "a + b : "<< a + b << '\n';
    };
    lambFunc();


    // how to printout lambda in loop.
    auto lambFunc2 = [a](){ 
        std::cout << "result of lambda : "<< a << '\n';
        //++a; <-it will error. it cant do increment without "&"(symbol to reference).
    };

    for (size_t i = 0; i < 5; ++i) {
        lambFunc2();                
    }

    
    // how to printout & increment lambda value in loop.
    auto lambFunc3 = [&a](){ // "&" to refer to "a variable". if we do without "&" referance symbol "increment(++a;)" cant do increment.
        std::cout << "result of copying lambda : "<< a << '\n';
        ++a;
    };

    for (size_t i = 0; i < 5; ++i) {        
        lambFunc3();
    }


    int aa = 20;
    int bb = 30;

    // this how we capture all variables.
    auto lambFunc4 = [=](){ // "=" to give access all variables once. so increment cant add variable's value.
        std::cout << "a + b : "<< aa + bb << '\n';
        //++aa; <-it will error because cant access variable to do increment.
    };
    lambFunc4();

    auto lambFunc5 = [&](){ // "&" to give access all variables many times.
        std::cout << "a + b : "<< aa + bb << '\n';
        ++aa;
    };
    lambFunc5();

    return 0;
}