#include <iostream>
#include <string>
using namespace std;

// struct is a keyword exactly similer like 'class'.

/* differences between 'struct' and 'class' :
- By default, members of a 'struct' are public, whereas in a 'class', they are private by default.
- 'struct' is often used for simpler data structures, while 'classes' are used for more complex behaviors
and encapsulation.*/

struct Person { // the default of struck is public.
    string name;
    int age;
    float height;
};

class car { // the default of class is private.
    string brand;
    int years;
    float price;
};

int main() {
    Person personStruct;
    personStruct.name = "Alice";
    personStruct.age = 30;
    personStruct.height = 5.7;

    car carClass;
    // we cant access class attributes because the default of class is private.
    carClass.brand = "mclarent";
    carClass.years = 2024;
    carClass.price = 2000;


    cout << "Name: " << personStruct.name << endl;
    cout << "Age: " << personStruct.age << endl;
    cout << "Height: " << personStruct.height << " feet" << endl;

    return 0;
}