#include <iostream>
#include <vector>

//compiler will always start to read top project to below then start to working in main fuction (int main)

//typedef = reserved keyword used to create an additional name (alias) for another data type.
//new identifier for an existing type helps with readability and reduces typos.
//using = keyword is alternative of typedef.

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
using point = double;
using single = char;

int main() {

    text_t conversation = "Hai";
    point x = 7;
    point y = 3.5;
    point sum = x + y;

    std::cout << conversation << '\n';
    std::cout << sum << '\n';

    return 0; //a way for main function send the message to user that this task is success or there are problems.
}