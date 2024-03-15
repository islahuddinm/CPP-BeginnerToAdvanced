#include <iostream>
#include <memory>

// before understand this you have to understand polymorphism.

/* Abstract class: is a restricted class that cannot be used to create objects (to access it, it must be
inherited from another class). it contains one or more pure virtual functions.
'Abstract class' provides a template or blueprint for derived classes to implement certain functions.*/

/* pure virtual function in C++ is a virtual function that is declared in a base class but has no
implementation provided in the base class.
pure virtual function have to implement in derived class.*/

class StreamInsertable{ // this is abstrack class.
    /* operator<< function that allows you to output a object directly to an output stream (std::ostream).
    or // this functin can be called to output by just using 'object name' in main function.*/
    friend std::ostream& operator<< (std::ostream& out,const StreamInsertable& operand){ // this is operator<< function.
        operand.stream_insert(out);
        return out;
    }
    
public : 
    virtual void stream_insert(std::ostream& out)const =0; // Pure virtual function or abstrack function.
};

/////////////////////////////////////////////////////////////////////////////////////////////// POINT

class Point : public StreamInsertable{
public : 
    Point() = default;
    Point(double x , double y)
    : m_x(x), m_y(y) // another way to initialize.
    {
    }

    virtual void stream_insert(std::ostream& out)const override{
        out << "Point [x: " << m_x << ",y: " << m_y << "]";
    }

private : 
    double m_x;
    double m_y;
};



class Animal :public StreamInsertable
{
public:
    Animal() = default;
    Animal(const std::string& description)
    : m_description(description)
    {
    }
    ~Animal(){}
    
    virtual void breathe()const{
        std::cout << "Animal::breathe called for : " << m_description << std::endl;
    }
    
    //Stream insertable interface
     virtual void stream_insert(std::ostream& out)const override{
         out << "Animal [description : " << m_description <<"]" ;
     }
    
protected: 
    std::string m_description;
};

/////////////////////////////////////////////////////////////////////////////////////////////// FELINE

class Feline : public Animal
{
public:
    Feline() = default;
    Feline(const std::string& fur_style, const std::string& description)
    : Animal(description) , m_fur_style(fur_style) // another way to initialize.
    {
    }
    ~Feline(){}
    
    virtual void run() const{
        std::cout << "Feline " << m_description << " is running" << std::endl;
    }
    
    //Stream insertable interface
     virtual void stream_insert(std::ostream& out)const override{
         out << "Feline [description : " << m_description << ", fur_style : " << 
                m_fur_style << "]";
     }
    std::string m_fur_style;
};



class Dog : public Feline
{
public:
    Dog() = default;
    Dog(const std::string& fur_style, const std::string& description)
    : Feline(fur_style,description)
    {
    }
    ~Dog(){}
    
    virtual void bark() const{
        std::cout << "Dog::bark called : Woof!" << std::endl;
    }
    
    virtual void stream_insert(std::ostream& out)const override{
         out << "Dog [description : " << m_description << ", fur_style : " << 
                m_fur_style << "]";
     }

};



class Cat : public Feline
{
public:
    Cat() = default;
    Cat(const std::string& fur_style, const std::string& description)
    : Feline(fur_style, description)
    {
    }
    ~Cat(){}
    
    virtual void miaw() const{
        std::cout << "Cat::miaw() called for cat " << m_description << std::endl;
    }
    
    virtual void stream_insert(std::ostream& out)const override{
         out << "Cat [description : " << m_description << ", fur_style : " << 
                m_fur_style << "]";
     }


};

/////////////////////////////////////////////////////////////////////////////////////////////// BIRD

class Bird : public Animal
{
public:
    Bird() = default;
    Bird(const std::string& wing_color, const std::string& description)
    : Animal(description) ,m_wing_color(wing_color) // another way to initialize.
    {
    }
    
    ~Bird(){}
    
    virtual void fly() const{
        std::cout << "Bird::fly() called for bird : " << m_description << std::endl;
    }
    
    virtual void stream_insert(std::ostream& out)const override{
         out << "Bird [description : " << m_description << ", wing_color : " << 
                m_wing_color << "]";
     }
    
protected : 
    std::string m_wing_color;
};



class Pigeon : public Bird
{
public:
    Pigeon() = default;
    Pigeon(const std::string& wing_color, const std::string& description)
    : Bird(wing_color,description)
    {
    }
    ~Pigeon(){}
    
    virtual void coo() const{
        std::cout << "Pigeon::coo called for pigeon : " << m_description << std::endl;
    }
    
    virtual void stream_insert(std::ostream& out)const override{
         out << "Pigeon [description : " << m_description << ", wing_color : " << 
                m_wing_color << "]";
     }

};



class Crow : public Bird
{
public:
    Crow() = default;
    Crow(const std::string& wing_color, const std::string& description)
    : Bird(wing_color,description)
    {
    }
    ~Crow(){}
    
    virtual void cow() const{
        std::cout << "Crow::cow called fro crow : " << m_description << std::endl;
    }
    
    virtual void stream_insert(std::ostream& out)const override{
         out << "Crow [description : " << m_description << ", wing_color : " << 
                m_wing_color << "]";
     }

};



int main(){

    Point p1(10,20);
    std::cout << "p1 : " << p1 << std::endl;
    //operator<<(std::cout,p1);

    std::cout << "------------" << std::endl;

    // std::unique_ptr is a smart pointer in C++ that owns and manages a dynamically allocated object.
    // std::make_unique is similar to the 'new' operator in that it dynamically allocates memory for an object.
    std::unique_ptr<Animal> animal0 = std::make_unique<Dog>("stripes","dog1");
    std::cout << *animal0 << std::endl;

    std::unique_ptr<Animal> animal1 = std::make_unique<Bird>("white","bird1");
    std::cout << *animal1 << std::endl;


    std::cout << "--------------" << std::endl;
    //Can even put animals in an array and print them polymorphically.
   std::shared_ptr<Animal> animals[] {
        std::make_shared<Dog>("stripes","dog2"),
        std::make_shared<Cat>("black stripes","cat2"),
        std::make_shared<Crow>("black wings","crow2"),
        std::make_shared<Pigeon>("white wings","pigeon2")
    };
	std::cout << std::endl;
    std::cout << "Printing out animals array : " << std::endl;
    for(const auto& a : animals){
        std::cout << *a << std::endl;
    }
    
    return 0;
}

/* std::unique_ptr is a smart pointer in C++ that owns and manages a dynamically allocated object.
 A smart pointer is a C++ class that mimics a regular pointer but provides additional functionality,
 such as automatic memory management. Smart pointers help prevent memory leaks and make code safer by
 automatically managing the memory allocation and deallocation of dynamically allocated objects.
 
 Ownership: std::make_unique returns a std::unique_ptr, which manages the allocated memory and ensures that
 the object is properly deleted when the std::unique_ptr goes out of scope. This helps prevent memory leaks by
 ensuring that the allocated memory is properly deallocated.*/