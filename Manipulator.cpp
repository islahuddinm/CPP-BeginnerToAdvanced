#include <iostream>
#include <iomanip>

//manipulator (functions or objects that can modify the output behavior of standard stream objects)
//manipulator is including std::hex, std::oct, std::dec, std::showbase, std::uppercase

int main() {

    bool redLight = true;
    bool greenLight = false;

    std::cout << "MANIPULATOR (BOOLALPHA)\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "True boolean value : " << redLight << '\n';
    std::cout << "False boolean value : " << greenLight << '\n';
      
    std::cout << std::boolalpha; // std::boolalpha; is a manipulator to manipulate values to be "true" or "false"
    std::cout << "Original value : " << redLight << '\n';
    std::cout << "Original value : " << greenLight << '\n';
    std::cout << '\n';

    std::cout << "MANIPULATOR (SETW)\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << std::setw(20) << "white space" << std::setw(30) << "white space" << std::setw(40) << "white space\n"; //std::stew() is a manipulator that sets the field width
    std::cout << std::setw(20) << "red space" << std::setw(30) << "red space" << std::setw(40) << "red space\n";
    std::cout << std::setw(20) << "green space" << std::setw(30) << "green space" << std::setw(40) << "green space\n";
    std::cout << std::setw(20) << "blue space" << std::setw(30) << "blue space" << std::setw(40) << "blue space\n";
    std::cout << '\n';

    int col_width = 20;

    std::cout << "MANIPULATOR (ALIGNMENT, SETFILL)\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << std::left; //std::left; is a manipulator to alignment
    std::cout << std::setfill('_');
    std::cout << std::setw(20) << "white space" << std::setw(30) << "white space" << std::setw(0) << "white space\n";
    std::cout << std::setw(col_width) << "red space" << std::setw(30) << "red space" << std::setw(0) << "red space\n";
    std::cout << std::setw(20) << "green space" << std::setw(30) << "green space" << std::setw(0) << "green space\n";
    std::cout << std::setw(20) << "blue space" << std::setw(30) << "blue space" << std::setw(0) << "blue space\n";
    std::cout << '\n';

    int PosNumber = 30;
    int NegNumber = -45;

    std::cout << "MANIPULATOR (SHOWPOS, NOSHOWPOS)\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << std::showpos; //std::showpos; is a manipulator to show "plus" symbol
    std::cout << "Positive Number = " << PosNumber << '\n';
    std::cout << "Negative Number = " << NegNumber << '\n';

    std::cout << std::noshowpos; //std::noshowpos; is a manipulator to disable std::showpos;
    std::cout << "Positive Number = " << PosNumber << '\n';
    std::cout << "Negative Number = " << NegNumber << '\n';
    std::cout << '\n';
    
    int hex = 0x10; //hexadecimal number code
    int oct = 010; //octal number code
    int bin = 0b1101; //binary number code
    int number1 = 1055; //decimal number code
    
    std::cout << "MANIPULATOR (HEX, OCT, DEC)\n";
    std::cout << "-------------------------------------------------------------------------\n";
    //std::hex, std::oct, & std::dec they will be not effect on floating number
    std::cout << hex << '\n';
    std::cout << oct << '\n';
    std::cout << bin << '\n';
    std::cout << number1 << '\n';
    std::cout << '\n';

    std::cout << std::hex << number1 << '\n'; //convert decimal to hexadecimal
    std::cout << std::oct << number1 << '\n'; //convert decimal to octal
    std::cout << std::dec << bin << '\n'; //convert bin to decimal
    std::cout << '\n';

    std::cout << "MANIPULATOR (SHOWBASE, NOSHOWBASE, UPPERCASE)\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << std::showbase; //it is to show number code
    std::cout << std::uppercase; //it is to make uppercase text
    std::cout << "number1 vatiable(des) : " << std::dec << number1 << '\n';
    std::cout << "number1 vatiable(hex) : " << std::hex << number1 << '\n';
    std::cout << "number1 vatiable(oct) : " << std::oct << number1 << '\n';
    std::cout << '\n';

    return 0;
}