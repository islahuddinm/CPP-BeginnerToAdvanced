#include <iostream>

    //public variable
    bool Red = false;
    bool Green = true;
    bool Yellow = false;
    bool PoliceStop = false;

void function2();
void function3();

int main() {

    /*(local variable)

    bool Red = false;
    bool Green = false;
    bool Yellow = false;
    bool PoliceStop = false;
    */

    if (Red) {

     std::cout << "Stop!\n";
    }

    else if (Green) {

         if (PoliceStop) {

         std::cout << "Stop Here!\n";
         }

         else if (Green) {

         std::cout << "GoGoGo!\n";
         }

         else {

         std::cout << "Keep Going\n";
         }
    }

    else if (Yellow) {

     std::cout << "Slow Down!\n";
    }

    else if (PoliceStop) {

     std::cout << "Stop Here!\n";
    }

    else {

     std::cout << "Keep Going\n";
    }

    function2();
    function3();
    return 0;
}

void function2() {

    if (Green && !PoliceStop) { //if work with logical operator(&&, !)

        std::cout << "GoGoGo!\n";
    }

    else {

     std::cout << "Keep Going\n";
    }
}

void function3() { //if we use "swift" conditional control flow it would be more simple

    int tool = Red;

    if (tool == Green) { //if work with relation operator(==)

        std::cout << "Active tool is Green\n";
    }

    else if (tool == Red) {

        std::cout << "Active tool is Red\n";
    }

    else if (tool == Yellow) {

        std::cout << "Active tool is Yellow\n";
    }


    else {

        std::cout << "Nothing active tool\n";
    }
}