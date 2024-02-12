#include <iostream>

//integer is used to represent whole numbers without any fraction part
//range integer is -2.147.483.648 to 2.147.483.647 for 32-bit system. it hold both positive and negative numbers
//size of an "int" is implementation dependent but commonly 4 bytes (bunch of bit. 1 byte is 8 bit)

/*
types of integer :

int (size : 4 bytes, range : -2.147.483.648 to 2.147.483.647 for 32-bit)
short (size : 2 bytes, range : -32.768 to 32.767)
long (size : 4 or 8 bytes, range : -2.147.483.648 to 2.147.483.647 for 32-bit or -9.223.372.036.854.775.808 to -9.223.372.036.854.775.807 for 64-bit)
long long (size : 8 bytes, range : -9.223.372.036.854.775.808 to 9.223.372.036.854.775.807 for 64-bit)
*/

//signed (it allows both positive and negative values)
//unsigned (it allows only not negative values)

int main() {

    //signed
    int integer = -42;
    short shortInteger = 32767; //you can use "signed short, "signed short int", "short int" instead of "short". it is option (you can use in other types of integer)
    long longInteger = 2147483647;
    long long long2Integer = 9223372036854775807;

    //unsigned
    unsigned int un_integer = -42; //valeu (-42) of un_integer can not be outputed becaue "unsigned data type" allows only positive value
    unsigned short un_shortInteger = 32767;
    unsigned long un_longInteger = 2147483647;
    unsigned long long un_long2Integer = 9223372036854775807;

    std::cout << "Signed integer is " << integer << '\n';
    std::cout << "Unsigned integer is " << un_integer << '\n';

    return 0;
}