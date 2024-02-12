#include <iostream>

void function2();

int main() {

    char message1[5] = {'h', 'e', 'l', 'l', 'o'}; //it is not '\0' it will work but they will print garbage character in the end.
    char message2[6] = {'h', 'e', 'l', 'l', 'o', '\0'}; //'\0' is null terminator that is to tell c++ it is the end of character. if it is not there it will work but they will print garbage character in the end.
    char message3[6] = {'h', 'e', 'l', 'l', 'o'}; //it will fill automatically even though there is no '\0' because amount of array is 6 that have rest 1(given automatically '\0')
    char message4[] = {'h', 'e', 'l', 'l', 'o'}; //it will have garbage character in the end. it will not automatically print
    
    std::cout << "Message with garbage character : " << message1 << '\n'; //they will print garbage character in the end.
    std::cout << "Message : " << message2 << '\n';
    std::cout << "Message : " << message3 << '\n';
    std::cout << "Message with garbage character : " << message4 << '\n';
    std::cout << '\n';
    
    function2();
    return 0;
}

void function2() {

    char message1[] = {"hello"}; //it will be given automatically '\0'
    char message2[] = {"hello world"}; //even we can give space between character. space also have array size
    char *message3 = "hello"; // so if we give asterisk in the variable will hold address of every character that have same address. it dont hold anymore a single character.

    std::cout << message1 << '\n';
    std::cout <<"Size of hello : "<< std::size(message1) << '\n';
    std::cout << message2 << '\n';
    std::cout <<"Size of hello world : "<< std::size(message2) << '\n';
    std::cout << message3[0] << '\n';
    std::cout << &(message3[1]) << '\n';
    std::cout << &message3 << '\n';
    std::cout << message3 << '\n';
    std::cout << '\n';

    int number[] = {9, 8, 7, 6, 5}; //we can not direcly print these characters like char data type

    std::cout << number << '\n';

}