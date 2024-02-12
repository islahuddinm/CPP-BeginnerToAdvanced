#include <iostream>

int main() {

    int a = 5;
    int b = 2;
    int c = 4;
    int d = 8;
    int e = 4;
    int f = 2;
    int g = 9;

    int result = a + b * c -d/e -f + g; //multiplication and division have be done first before addition and subtraction (5 + 8 + -2 + -2 + 9 = 18)
    int count = a + b * (c -d)/e -f + g; //if there is "()" it means we want to be done first values in parentheses (5 + 2 * -4/4 -2 + 9 = 10)

    std::cout << "Result : " << result << '\n';
    std::cout << "Count : " << count << '\n';

    return 0;
}