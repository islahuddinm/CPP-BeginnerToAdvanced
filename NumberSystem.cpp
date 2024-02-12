/*
//binary to decimal
00000 = 0 x 2*4  +  0 x 2*3  +  0 x 2*2  +  0 x 2*1  +  0 x 2*0 (0)
00001 = 0 x 2*4  +  0 x 2*3  +  0 x 2*2  +  0 x 2*1  +  1 x 2*0 (1)
00010 = 0 x 2*4  +  0 x 2*3  +  0 x 2*2  +  1 x 2*1  +  0 x 2*0 (2)
00011 = 0 x 2*4  +  0 x 2*3  +  0 x 2*2  +  1 x 2*1  +  1 x 2*0 (3)
00100 = 0 x 2*4  +  0 x 2*3  +  1 x 2*2  +  0 x 2*1  +  0 x 2*0 (4)
00101 = 0 x 2*4  +  0 x 2*3  +  1 x 2*2  +  0 x 2*1  +  1 x 2*0 (5)
00110 = 0 x 2*4  +  0 x 2*3  +  1 x 2*2  +  1 x 2*1  +  0 x 2*0 (6)
00111 = 0 x 2*4  +  0 x 2*3  +  1 x 2*2  +  1 x 2*1  +  1 x 2*0 (7)
01000 = 0 x 2*4  +  1 x 2*3  +  0 x 2*2  +  0 x 2*1  +  0 x 2*0 (8)
01001 = 0 x 2*4  +  1 x 2*3  +  0 x 2*2  +  0 x 2*1  +  1 x 2*0 (9)

//decimal to binary
    (16) (8) (4) (2) (1) // it is bit (binary digit)
0 =  0    0   0   0   0
1 =  0    0   0   0   1
2 =  0    0   0   1   0
3 =  0    0   0   1   1
4 =  0    0   1   0   0
5 =  0    0   1   0   1
6 =  0    0   1   1   0
7 =  0    0   1   1   1
8 =  0    1   0   0   0
9 =  0    1   0   0   1

//decimal to hexadecimal
0  = 0
1  = 1
2  = 2
3  = 3
4  = 4
5  = 5
6  = 6
7  = 7
8  = 8
9  = 9
10 = A
11 = B
12 = C
13 = D
14 = E
15 = F
*/

#include <iostream>

int main() {

    int hex = 0x10; //hexadecimal number
    int oct = 010; //octal number
    int bin = 0b1101; //binary number
    int number1 = 1055; //decimal number
    
    //std::hex, std::oct, & std::dec they will be not effect on floating number
    std::cout << hex << '\n';
    std::cout << oct << '\n';
    std::cout << bin << '\n';
    std::cout << std::hex << number1 << '\n'; //convert decimal to hexadecimal
    std::cout << std::oct << number1 << '\n'; //convert decimal to octal
    std::cout << std::dec << bin << '\n'; //convert bin to decimal
    std::cout << '\n';

    std::cout << std::showbase; //it is to show number code
    std::cout << std::uppercase; //it is to make uppercase text
    std::cout << "number1 vatiable(des) : " << std::dec << number1 << '\n';
    std::cout << "number1 vatiable(hex) : " << std::hex << number1 << '\n';
    std::cout << "number1 vatiable(oct) : " << std::oct << number1 << '\n';
    std::cout << '\n';

    //check the size with sizeof
    std::cout << "Size in memory" << '\n';
    std::cout << "Size of int : " << sizeof(int) << '\n';
    std::cout << "Size of hex : " << sizeof(hex) << '\n';
    std::cout << "Size of oct : " << sizeof(oct) << '\n';
    std::cout << "Size of bin : " << sizeof(bin) << '\n';
    std::cout << "Size of number1 : " << sizeof(number1) << '\n';

    return 0;
}