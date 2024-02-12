#include <iostream>

int main() {

    //increment
    int value = 5;

    std::cout << "The value : " << value++ << '\n'; //'++' of value++ is increment to give 1 value to the value (but this print out will not add 1 value because '++' be in suffix)
    std::cout << "The result : " << value << '\n'; //this time print out will add 1 value because we have given '++' be in suffix of print out before
    std::cout << '\n';

    value = 5; //reset value
    
    std::cout << "The value : " << ++value << '\n'; //this print out will get increment directly because '++' be in prefix
    std::cout << '\n';

    //decrement
    value = 5; //reset value

    std::cout << "The value : " << --value << '\n'; //result is 4

    value = 5; //reset value
    value--; //another way in decrement

    std::cout << "The value : " << value << '\n'; //result is 4

    value = 5; //reset value
    --value; //another way in decrement

    std::cout << "The value : " << value << '\n'; //result is 4

    return 0;
}