#include <iostream>
#include <string>

//compiler will always start to read top project to below then start to working in main fuction (int main)

//cout << (insertion operator)
//cin >> (extraction operator)

/*
int main() {

    std::string name;
    int age;

    std::cout << "please type your name and age : " << '\n';

    std::cin >> name;
    std::cin >> age;

    std::cout << "hallo " << name << " you are " << age << " years old " << '\n';

    return 0;
}
*/

/*
int main() {

    std::string name;
    int age;

    std::cout << "please type your name and age : " << '\n';

    std::getline(std::cin, name); //statment for text contains spaces.

    std::cout << "hallo " << name << " you are " << age << " years old " << '\n';

    return 0;
}
*/

int main() {

    std::string name;
    int age;

    std::cout << "what is your age? ";
    std::cin >> age; //if we accept user input with "cin" followed by "getline" so in our input buffer there is a newline character and we don't pick up newline character. when we reach the getline function it accepts the newline character that is still within buffer.

    std::cout << "what is your full name? ";
    std::getline(std::cin >> std::ws, name); //"std::ws" to prevent text above. std::ws (white spaces) this portion will eliminate any newline character or any white spaces before any user input.

    std::cout << "hallo " << name << '\n';
    std::cout << "your are " << age << " years old" << '\n';

    return 0;
}