#include <iostream>
#include <iomanip>

//floating is used represent numbers with fraction parts

/* precision  is indicates how many digits the value can have after the decimal point.
OR precision can means : float has 7 precision. it mean float can just output precisely 7 digits after
7 digits the next number will not exact.*/

//scientific notation is a way of expressing numbers that are too long or too small number in a more concise form.
//infinity is result of any number divided zero
//NaN (non a number) is result of zero divided zero
//"f" suffic (3.14655467f) of number is represent of "float" number. so the number will be setting to precision of float (7 precision)
//"l" suffic (3.14655467l) of number is represent of "long double" number. so the number will be setting to precision of long double (15 precision)

/*
types of floating point data type :

float : (size : 4 bytes, precision : about 7 decimal digits)
double : (size : 8 bytes, precision : about 15 decimal digits)
long double : (size : 16 bytes, precision : greater than double)
*/

int main() {

    float myFloat = 3.14159265358979323846f; //float has 7 precision. it mean float can just output precisely 7 digits
    float myFloat2 = 323345789; //float has 7 precision. it mean float can just output precisely 7 digits
    double myFloat3 = 323345789.0f; //its result has 7 precision eventhough the data type is douyble because its suffix is "f" (float number)
    double myDouble = 3.14159265358979323846; //double has 15 precision. it mean float can just output precisely 15 digits
    long double myLongDouble = 3.14159265358979323846l; //long double has more than double precision. it mean float can just output precisely 15 digits more

    std::cout << "Size of float : " << sizeof(float) << '\n';
    std::cout << "Size of double : " << sizeof(myDouble) << '\n'; //we can use to show size by using variable as well
    std::cout << "Size of float : " << sizeof(long double) << '\n';
    std::cout << '\n';
    
    std::cout << std::setprecision(5) << "Float :" << myFloat << '\n';
    std::cout << std::setprecision(20) << "Float2 :" << myFloat2 << '\n';
    std::cout << std::setprecision(20) << "Float3 :" << myFloat3 << '\n';//its result has 7 precision eventhough the data type is douyble because its suffix is "f" (float number)
    std::cout << std::setprecision(20) << "Double :" << myDouble << '\n';
    std::cout << std::setprecision(20) << "Long Double :" << myLongDouble << '\n';
    std::cout << '\n';  

    double scientificNotation1 = 3e-7; //3e-7 (0.0000003) scientificNotation1 & 2 basically the value is same
    double scientificNotation2 = 0.0000003; //0.0000003 (3e-7 ) scientificNotation1 & 2 basically the value is same
    double scientificNotation3 = 1e+5;

    std::cout << "Scientific Notation : " << scientificNotation1 << '\n';
    std::cout << "Scientific Notation : " << scientificNotation2 << '\n';
    std::cout << "Scientific Notation : " << scientificNotation3 << '\n';
    std::cout << '\n';

    double a = 5.6;
    double b = 0;
    double c = 0;

    double value1 = a / b; //its result is infinity
    double value2 = c / b; ////its result is NaN (non a number)

    std::cout << "Result of value1 : " << value1 <<'\n';
    std::cout << "Result of value2 : " << value2 <<'\n';
    std::cout << '\n';
       
    return 0;
}