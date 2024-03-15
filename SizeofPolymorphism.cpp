#include <iostream>

/* Inheritance is a fundamental concept in OOP. Creating new classes based on existing classes,
inheriting their attributes and methods of existing classes while also allowing for customization and
extension.

or

Inheritance is a fundamental concept in object-oriented programming (OOP) that allows
one class (the derived class) to inherit properties and behavior from another class (the base class).
This enables code reuse and the creation of a hierarchy of classes.*/

// so if we create the derived class we will inherit properties, attribute and behavior from base class.

/* virtual keyword is used to a base class's member function that you can redefine/overriden in
a derived class to achieve polymorphism. you can use a pointer or reference to call the virtual function in
base class and it will automatically execute its actual function(you have redifined function) in
the derived class.FOR EXAMPLE IN MAIN FUNCTION BELOW.*/

class abstrackEmployee { // base/parent class.
    virtual void askForPromotion() = 0; // Pure virtual function or abstrack function.
};


// this public is used to enable to access 'abstrackEmployee' class. if there dont declare, its default is ptivate.
class employee : public abstrackEmployee { // derived class (or child class or sub class) is a class that is based on another class(called a base class or parent class). The derived class inherits attributes and behaviors (methods) from the base class and can also add new attributes and behaviors or override existing ones.
private: // when we change 'private' to be 'protected' it means they just allow a derived class(developer) to inherit/access atributes of base class(employee).
    std::string name;
    std::string company;
    int age;
    char blood;

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
    int getBlood() {  
        return this->blood;
    }

    // default constructor (a constructor with no arguments).
    employee() = default; // constructor
    employee(std::string nameParam, std::string companyParam, int ageParam) { // constructor
        name = nameParam;
        company = companyParam;
        age = ageParam;
    }

    virtual void working() { // this is virtual function ///////////////////////////////////////////////
        std::cout << name << " is working in " << '\n';
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


/* this public is used to make 'employee' is public, its default is ptivate.
so we can access properties, attribute, method and behavior in main function.*/
class developer : public employee { // developer is a derived class of employee as base class/ parent class.
public:
    std::string favProgrammingLanguage;

    developer(std::string nameParam, std::string companyParam, int ageParam, std::string favProgrammingLanguageParam) : employee(nameParam, companyParam, ageParam) { // constructor
        favProgrammingLanguage = favProgrammingLanguageParam;
    }

    // this is a implementation in a class can be considered its behavior.
    void working() {
        std::cout << getName() << " fix bug using " << favProgrammingLanguage << '\n';
    }
};

class teacher : public employee { 
public:
    std::string subject;

    teacher(std::string nameParam, std::string companyParam, int ageParam, std::string subjectParam) : employee(nameParam, companyParam, ageParam) { // constructor
        subject = subjectParam;
    }
    
    void working() {
        std::cout << getName() << " is teaching " << subject << '\n';
    }
};



void printMethod(employee *E);
int main() {

    employee employee1("Mike", "Amazon", 26);
    employee1.askForPromotion();   

    teacher employee2("Sandrina", "Amazon", 32, "Math");
    employee2.askForPromotion();    

    developer employee3("MI", "MI Company", 25, "C++");   
    employee3.askForPromotion();

    std::cout << '\n';

    employee2.working();
    employee3.working();
   
    std::cout << '\n'; //////////////////////////////////////////////////////////////////////////////////////

    std::cout << "//////////////////////////////////////// OBJECT SIZES with VIRTUAL(size + 8)" << '\n';
    std::cout << "Size of (employee1) : " << sizeof(employee1) << " bytes" << '\n';
    std::cout << "Size of (employee2) : " << sizeof(employee2) << " bytes" << '\n';
    std::cout << "Size of (employee3) : " << sizeof(employee3) << " bytes" << '\n'; // size of 'employee3' and 'employee1'. compiler will count 2 object beause 'employee3 'inherit 'employee1'.
    std::cout << "//////////////////////////////////////// CLASS SIZES with VIRTUAL(size + 8)" << '\n';
    std::cout << "Size of (employee) : " << sizeof(employee) << " bytes" << '\n';
    std::cout << "Size of (developer) : " << sizeof(developer) << " bytes" << '\n';
    std::cout << "Size of (teacher) : " << sizeof(teacher) << " bytes" << '\n';

    // this method how to get size of 'employee3' only. that is by using 'Base Class's' class type, not using 'Derived Class' class type itself.
    employee employee = employee3; // size of 'employee3' only. this method how to get size of 'employee3' only. compiler will not count 2 object are 'employee3 'and 'employee1' anymore.
    std::cout << "//////////////////////////////////////// OBJECT SIZES with VIRTUAL(size + 8)" << '\n';
    std::cout << "Size of (employee3) ONLY : " << sizeof(employee) << " bytes" << '\n';

    return 0;
}

void printMethod(employee *E) {
    E->working();
}