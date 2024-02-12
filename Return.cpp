#include <iostream>
//compiler will always start to read top project to below then start to working in main fuction (int main)

//return = statment that returns a value back to calling function (function that has return statment, not return 0; statment)

double square(double x) {

    //double result = x * x;
    //return result;

    return x * x;

}

int orang(int first, int second) {

    int hasil = first + second;
    return hasil;
}

int main() {

    double x = 4;
    double y = 4;
    double sum = square(x * y);
    std::cout << sum << '\n';

    int jumlah = orang(7,8);
    //std::cout << jumlah << '\n';

    return 0; //a way for main function send the message to compailer that this task is success or there are problems.
              //so that compiler read faster programs.
}