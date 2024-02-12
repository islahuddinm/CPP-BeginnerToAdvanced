#include <iostream>

//  Lambda Functions are anonymous functions means that the function is without a name.

/*
lamda function signature :

[capture list] (parameters) ->return type{
    ///// function body /////
}

*/

int main() {

    // this lamda function cant printout because we dont call this function.
    [](){
        std::cout << "hello" << '\n';
    };


    // this how we call the lamda function.
    auto lambFunc = [](){ // "auto lambFunc =" the variable is to hold a lambda function.
        std::cout << "hello world" << '\n';
    };
    lambFunc(); // it is to call lambda function that is holded by "lambFunc" variable. so we type "lambFunc();"


    // declare a lambda function and call it directly
    [](){
        std::cout << "call lambda function directly" << '\n';
    }(); // "();" it is to call lambda function directly without any handler.


    // this lambda function that takes parameters.
    [](double a, double b){
        std::cout << "a + b : " << a + b << '\n';
    }(10.0, 5.5); // it is parameter values.


    // this lambda function that takes multiple parameter.
    auto lambFunc2 = [](int a, int b){
        std::cout << "a + b : " << a + b << '\n';
    };
    lambFunc2(3, 5);
    lambFunc2(4, 5);


    // this lambda function that returns something.
    auto result = [](double a, double b){
        return a + b;
    }(10.0, 5.5);
    std::cout << "a + b : " << result << " (return)" << '\n';


    // this lambda function that returns diectly.
    std::cout << "a + b : " <<[](double a, double b){
        return a + b;
    }(10.0, 5.5) << " (return directly)" << '\n';


    // this lambda function takes & returns multiple parameter.
    auto lambFunc3 = [](int a, int b){
        return a + b;
    };
    lambFunc3(3, 5);
    lambFunc3(4, 5);
    std::cout << "a + b : " << lambFunc3(3, 5) << " (multiple return)" << '\n';
    std::cout << "a + b : " << lambFunc3(4, 5) << " (multiple return)" << '\n';


    // this lambda function returns data type explicitly.
    auto lambFunc4 = [](double a, double b)-> int{
        return a + b;
    };
    lambFunc4(10.0, 5.5);
    std::cout << "a + b size of : " << sizeof(lambFunc4(10.0, 5.5)) << '\n';
    std::cout << "a + b result : " << lambFunc4(10.0, 5.5) << '\n';

    return 0;
}