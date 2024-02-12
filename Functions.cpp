#include <iostream>

//void is return type

//function that take a single parameter, and doen't gave back the result explicitly.
void enter_bar(size_t age) { //"unsigned int age" is function parameter

    if (age > 18) {

        std::cout << "you are " << age << " years old" << '\n';
    }

    else {
        
        std::cout << "sorry, you are too young for this\n";
    }
}

//function that takes multiple parameters and returns the result of the computation
int max(int a, int b) {

    if (a > b) {

        return a;
    }

    else {
        
        return b;
    }
}

//function that dose not take parameters and results nothing
void sayHello() {

    std::cout << "Hello\n";
}

//function is going to increment and multiplay
double increment_multiply(double a, double b) {

    std::cout << "inside function, before increment\n";
    std::cout << "a : " << a <<'\n';
    std::cout << "b : " << b <<'\n';

    double result = ((++a) * (++b));

    std::cout << "inside function, after increment\n";
    std::cout << "a : " << a << '\n';
    std::cout << "b : " << b << '\n';

    return result;
}

int main() {

    enter_bar(20); //funtion argument
    enter_bar(25);
    enter_bar(16);

    for (size_t i = 16; i <= 19; ++i) {

        enter_bar(i);
    }
    std::cout << "//////////////////////////////////////////////////////////////////////////// 1\n";
    std::cout << '\n';

    int a = 7;
    int b = 5;

    int result = max(a, b);

    std::cout << "value result : " << result << '\n';
    std::cout << "value result : " << max(a, b) << '\n';
    std::cout << "value result : " << max(4, 20) << '\n';

    std::cout << "//////////////////////////////////////////////////////////////////////////// 2\n";
    std::cout << '\n';

    sayHello();
    std::cout << "//////////////////////////////////////////////////////////////////////////// 3\n";
    std::cout << '\n';

    double c = 2.00;
    double d = 5.00;

    std::cout << "outside function, before increment\n";
    std::cout << "c : " << c <<'\n';
    std::cout << "d : " << d <<'\n';

    double multiple_result = increment_multiply(c, d);

    std::cout << "outside function, after increment\n";
    std::cout << "c : " << c <<'\n';
    std::cout << "d : " << d <<'\n';
    std::cout << "//////////////////////////////////////////////////////////////////////////// 4\n";
    std::cout << '\n';
    
    return 0;
}