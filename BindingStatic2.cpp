#include <iostream>

class Employee {
public:
    void working() {
        std::cout << "Employee is working." << std::endl;
    }

    static void staticWorking() {
        std::cout << "Employee is static working." << std::endl;
    }
};

int main() {

    Employee emp;
    // this is static binding.
    emp.working();
    
    return 0;
}

/* the call 'emp.working();' is an example of static binding. This is because 'working()' is a
non-static member function of the 'Employee' class, and you are calling it using an object ('emp')
rather than a pointer or reference.

Static binding means that the compiler determines which function to call at compile time
based on the static (known at compile time) type of the object or expression.
In this case, since 'emp' is of type 'Employee', the compiler knows at compile time that it should call
the 'working()' function of the 'Employee' class.*/