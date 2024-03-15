#include <iostream>

/* this abstraction. Abstraction is The concept of hiding complex implementation details and
showing only the necessary features of an object or only the simple features of an object.*/

// Abstract class
/* 'abstrackEmployee' class is an abstract class. An abstract class is a class that cannot be used on
its own because it contains one or more pure virtual functions.
A pure virtual function is a virtual function that is declared in a base class but has no implementation.

- Virtual functions are used in inheritance to enable polymorphism, which allows a derived class to
provide a specific implementation of a function that is already defined in its base class.

Here's a breakdown of the parts of this declaration:
-'virtual': a keyword is used in a class declaration to declare a virtual function.
-'askForPromotion': the name of function.
-'= 0': Makes the function pure virtual, meaning it has no implementation in the base class and must be
implemented in derived classes.*/

/* this case that whoever decides to sign this contact called 'abstrackEmployee', this contract will
provide implementation for method('askForPromotion') is requirment to get promotion.*/
class abstrackEmployee { // base/parent class or abstract class.
    virtual void askForPromotion() = 0; // Pure virtual function or abstrack function.
};

class employee : public/*public is base access specifier*/ abstrackEmployee { // derived class is a class that is based on another class(called a base class or parent class). The derived class inherits attributes and behaviors (methods) from the base class and can also add new attributes and behaviors or override existing ones.
private:
    std::string name;
    std::string company;
    int age;

public:
    std::string getName() {
        return this->name;        
    }
    std::string getCompany() {        
        return this->company;
    }
    int getAge() {  
        return this->age;
    }

    employee(std::string nameParam, std::string companyParam, int ageParam) { // constructor
        name = nameParam;
        company = companyParam;
        age = ageParam;
    }

    // this is a implementation in a class can be considered its behavior.
    void introduceYourself() {
        std::cout << "Name : " << name << '\n';
        std::cout << "Company : " << company << '\n';
        std::cout << "Age : " << age << '\n';
    }

    // this is a implementation of a method (function) in a class can be considered its behavior.
    void askForPromotion() {
        if (age > 30) {
            std::cout << name << " get promoted!" << '\n';
        }
        else {
            std::cout << name << ", no promotion for you!" << '\n';
        }
    }
};

int main() {

    employee employee1("Mike", "Amazon", 26);
    employee1.askForPromotion();

    employee employee2("Sandrina", "Amazon", 32);
    employee2.askForPromotion();

    return 0;
}