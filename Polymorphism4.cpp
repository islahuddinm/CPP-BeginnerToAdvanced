#include <iostream>

/* 'final' keyword is used in the context of inheritance to indicate that a virtual function cannot be
overridden in a derived class or that a class cannot be inherited from.*/

class Animal
{
public:
    Animal() = default;
    Animal(std::string_view description)
    : m_description(description) {
    }
    virtual ~Animal() {        
    }
    
    virtual void breathe()const{
        std::cout << "Animal::breathe called for : " << m_description << std::endl;
    }
    
protected: 
    std::string m_description;
};

/////////////////////////////////////////////////////////////////////////////////////////////// FELINE

class Feline : public Animal
{
public:
    Feline() = default;
    Feline(std::string_view fur_style, std::string_view description)
    : Animal(description), m_fur_style(fur_style) {
    }
    virtual ~Feline() {        
    }
    
    virtual void run() const  {
        std::cout << "Feline " << m_description << " is running" << std::endl;
    }
    std::string m_fur_style;
};

class Dog : public Feline
{
public:
    Dog() = default;
    Dog(std::string_view fur_style, std::string_view description)
    : Feline(fur_style,description) {
    }
    virtual ~Dog() {        
    }
    
    virtual void bark() const{
        std::cout << "Dog::bark called : Woof!" << std::endl;
    }
    
    //The run method in subclasses of dog can't be overrided
    //further, derived classes are forced to use the implmenetation in Dog
    void run() const override final {
        std::cout << "Dog::run called" << std::endl;
    }

};

class BullDog : public Dog
{
public:
    BullDog() {        
    }
    virtual ~BullDog() {        
    }
    
    // we cant override 'run function' of dog because there is a 'final' keyword.
    //Will throw a compiler error
    /*
   virtual void run() const override{
       std::cout << "Bulldog::run() called" << std::endl;
   }
   */

};

class Cat final : public Feline // if there are derived class inherit 'cat class' they will be error because 'final' keyword.
{
public:
    Cat() = default;
    Cat(std::string_view fur_style, std::string_view description)
    : Feline(fur_style, description) {
    }
    virtual ~Cat() {        
    }
    
    //Interesting fact #2
	//Useless virtual method. Cat is final, so no one will be deriving from
	//this class and have a chance to specialize it
    virtual void miaw() const{
        std::cout << "Cat::miaw() called for cat " << m_description << std::endl;
    }
	
	//This method is useful though
	void virtual run() const override{
		//
	}
};

class WildCat /*: public Cat*/ // Can not derive from final base class
{
public:
    WildCat() {        
    }
    ~WildCat() {        
    }

};

///////////////////////////////////////////////////////////////////////////////////////////// BIRDS

class Bird : public Animal
{
public:
    Bird() = default;
    Bird(std::string_view wing_color, std::string_view description)
    : Animal(description) ,m_wing_color(wing_color) {
    }    
    virtual ~Bird() {        
    }
    
    //This is contradictory : virtual and final have counter acting effects.
	//Final wins here
    virtual void fly() const final{
        std::cout << "Bird::fly() called for bird : " << m_description << std::endl;
    }
    
private : 
    std::string m_wing_color;
};

class Pigeon : public Bird
{
public:
    Pigeon() = default;
    Pigeon(std::string_view wing_color, std::string_view description)
    : Bird(wing_color,description) {
    }
    virtual ~Pigeon() {        
    }
    
    virtual void coo() const{
        std::cout << "Pigeon::coo called for pigeon : " << m_description << std::endl;
    }


};

class Crow : public Bird
{
public:
    Crow() = default;
    Crow(std::string_view wing_color, std::string_view description)
    : Bird(wing_color,description) {
    }
    virtual ~Crow(){        
    }
    
    virtual void cow() const{
        std::cout << "Crow::cow called fro crow : " << m_description << std::endl;
    }
    
    //This will give a compiler error is fly is marked as final in Bird
    /*
    virtual void fly() const override{
        
    }
    */

};


//Intersting fact #1
/*
class Plane final{
    Plane()=default;
};

//This will trigger a compiler error
class FigherJet : public Plane{
    
};
*/
int main(){

    std::cout << "Hello" << std::endl;
    return 0;
}