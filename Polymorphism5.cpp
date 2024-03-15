#include <iostream>

// this is how to call virtual functions have argument in polymorphism is working.

class Base
{
public:
    Base(){        
    }
    ~Base(){
    }
    
    virtual double add(double a = 5 , double b = 5) const{
        std::cout << "Base::add() called" << std::endl;
        return (a + b + 1);
    }
};

class Derived : public Base
{
public:
    Derived() {        
    }
    ~Derived() {        
    }
    
    virtual double add(double a = 10 , double b = 10) const override{
        std::cout << "Derived::add() called" << std::endl;
        return (a + b +2);
    }

};

int main(){

    //Base ptr : to call virtual function in derived class. but it will use parameter in base class.
    Base * base_ptr1 = new Derived; // it creates a new Derived object on the heap and assigns its address to base_ptr1, which is declared as a pointer to Base.
    double result = base_ptr1->add();
    std::cout <<"Result (base ptr) : " << result  << std::endl; //12


    std::cout << "---------------------"<< std::endl;
	
    //Base ref : to call virtual function in derived class. but it will use parameter in base class.
    Derived derived1;
    Base& base_ref1 = derived1;
    result = base_ref1.add();
    std::cout << "Result (base ref) : " << result << std::endl; // 12
    
    std::cout << "---------------------"<< std::endl;


    // call virtual function in base class.
    Base base3;
    result = base3.add();
    std::cout << "raw result : " << result << std::endl; // 11

    std::cout << "---------------------"<< std::endl;

    // call virtual function in derived class.
    Derived derived2;
    result = derived2.add();
    std::cout << "Result (Direct object) : " << result << std::endl; // 22
	
    std::cout << "---------------------"<< std::endl;

	// call virtual function in base class.
	Base base1 = derived2;
	result = base1.add();
    std::cout << "Result (Raw objects assignment) : " << result << std::endl; //11

   
    return 0;
}