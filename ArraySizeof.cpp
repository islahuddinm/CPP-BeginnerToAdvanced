#include <iostream>

int main () { //this loop is to just take array's value

    int score[] = {10, 9, 8, 400, 6, 5, 4, 3, 2, 1};

    std::cout << "Size of array : " << sizeof(score) << " bytes" << '\n';
    std::cout << "Addres of array : " << &score << '\n';
    std::cout << "Addres of array : " << score << '\n';

    for (int i = 0; i < std::size(score); i++) {

        std::cout << "Addres of array " << i << " : " << &score[i] << '\n';
    }

    return 0;
}