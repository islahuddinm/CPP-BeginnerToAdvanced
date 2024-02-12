#include <iostream>
#include <cmath>

/*
function library

- Input/Output (I/O) Functions = <iomanip> for formatting output (cin, cout, cerr, clog)
- String Functions = strlen(), strcpy(), strcat(), strcmp()
- Math Functions = <cmath> (cos(), sqrt(), pow(), etc.)
- Container Classes = <vector>, <list>, <map>, <unordered_map>, <set>, <unordered_set>, <queue>, <stack>
- Algorithms = <algorithm> (sort(), find(), transform(), etc.)
- File I/O = <fstream> ( for file input/output operations using "ifstream" and "ofstream" classes.)
- Memory Management = <memory> (shared_ptr, unique_ptr) (new, delete)
- Concurrency = <thread>
- Time and Date = <chrono>/ <ctime>
- Exception Handling = try, catch, and throw
- Random Number Generation = <random> (rand, srand)
- Type Information = <typeinfo>
- Type conversion = C++cast operator, C-style cast
  (static_cast, dynamic_cast, std::stoi, std::stringstream, std::to_integer)
*/

//why c++ beginning function is int main?
//int: This is the return type of the main function. A return value of 0 typically indicates successful execution.
//main function is special because it is the first function that gets executed when a program starts running.

void function2();

int main() {

    double weight = 7.7;
    double saving = -500;

    std::cout << "Weight rounded to floor is : " << std::floor(weight) << '\n'; //std::floor is a function to round value down
    std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << '\n'; //std::floor is a function to round value up

    //std::abs is a function calculates the absolute value(value's distance from zero on the number line(-3,-2,-1,0,1,2,3)) of a number.
    std::cout << "Absolute of weight is : " << std::abs(weight) << '\n'; 
    std::cout << "Absolute of saving is : " << std::abs(saving) << '\n';
    std::cout << '\n';

    function2();
    return 0;
}

void function2() {

    //std::isalnum is a function in C++ that is part of the <cctype> header.
    //it is used to check if the input value is either "an alphabet or a number" (alphanumeric).
    //"an alphabet or a number" (alphanumeric. which means it is either a letter (a-z or A-Z) or a digit (0-9).).

    char myChar = 'A';

    if (std::isalnum(myChar)) {
        std::cout << myChar << " is alphanumeric." << std::endl;
    }
    
    else {        
        std::cout << myChar << " is not alphanumeric." << std::endl;
    }

    int myNum = 0xf;

    if (std::isalnum(myNum)) {
        std::cout << myNum << " is alphanumeric." << std::endl;
    }
    
    else {        
        std::cout << myNum << " is not alphanumeric." << std::endl;
    }
}