#include <iostream>

//compiler will always start to read top project to below then start to working in main fuction (int main)

//why c++ beginning function is int main?
//int: This is the return type of the main function. A return value of 0 typically indicates successful execution.
//main function is special because it is the first function that gets executed when a program starts running.

//arithmetic operators = symbols used to perform common arithmetic operations like addition, subtraction, multiplication, division, modulus, etc.

int main() {

    int students = 20;
    //students = students + 1;
    //students+=2;
    //students++;

    //students = students - 1;
    //students-=2;
    //students--;

    //students = students * 1;
    //students*=2;

    //students = students / 1;
    //students/=2;

    int reminder = students % 3; //modulus (a mathematical operator that returns the remainder(rest) of a division operation. it is integer reminder)

    //int teacher = 6 - 5 + 4 * 3 / 2;
    //int teachers = 6 - (5 + 4) * 3 / 2;

    //std::cout << students << '\n';
    std::cout << reminder << '\n'; //result 1 not 2 because 20 students divided 2 in the beginning
    //std::cout << teacher << '\n';
    //std::cout << teachers;

    return 0; //a way for main function send the message to user that this task is success or there are no problems.
}