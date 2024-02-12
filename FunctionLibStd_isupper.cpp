#include <iostream>

int main() {

    char myArray[] = {"Hello"};

    int countFind = 0;
    int countElement = 0;
    int countUpper = 0;
    
    for (char element : myArray) {

        if (element == 'l') {

            countFind++;         
        }

        countElement++;
    } countElement--;

    for (char element : myArray) {

        if (std::isupper(element)) {

            countUpper++;         
        }

    }

    std::cout << "'l' character is found : " << countFind << '\n';
    std::cout << "'upperchase' character is found : " << countUpper << '\n';
    std::cout << "amount of element : " << countElement << '\n';
    std::cout << '\n';

    return 0;
}