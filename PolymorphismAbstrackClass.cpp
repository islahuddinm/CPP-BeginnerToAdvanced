#include <iostream>

/* An abstract class in C++ is a class that cannot be instantiated on its own, meaning you cannot create
objects of that class directly. Instead, it is designed to be a base class from which other classes can inherit.

Abstract classes often contain one or more pure virtual functions, which are declared with the virtual keyword
and assigned a = 0 in the function declaration. These pure virtual functions must be implemented by
any derived class that wants to be instantiated.

Abstract classes are used to define a common interface for a group of subclasses. They can have
normal member functions and data members like any other class, but the presence of pure virtual functions makes
them abstract and prevents instantiation.*/

class Shape // this is abstrack class.
{
protected:
    Shape() = default;
    Shape(std::string_view description) : m_description(description) {        
    }
public :    
    
    virtual ~Shape() = default; // If destructor is not public, you won't be
                            // able to delete base_ptrs. SHOW THIS TO STUDENTS
    //Pure virtual functions
    virtual double perimeter() const = 0;
    virtual double surface() const = 0;
private : 
    std::string m_description;
};

class Rectangle : public Shape
{
public:
    Rectangle() = default;
    Rectangle(double width , double height,std::string_view  description)
    : Shape(description), m_width(width), m_height(height) {
    }
    virtual ~Rectangle() = default;
    
public:
    
    virtual double perimeter() const override{
        return (2*m_width + 2*m_height);
    }
	
	
    virtual double surface() const override{
        return (m_width * m_height);
    }
	
private : 
    double m_width{0.0};
    double m_height{0.0};

};

class Circle : public Shape
{
public:
    Circle() = default;
    Circle(double radius , std::string_view  description)
    : Shape(description), m_radius(radius) {
    }
    virtual ~Circle()= default;
    
    
    virtual double perimeter() const {
        return (2 * PI * m_radius);
    }

    virtual double surface() const {
        return PI * m_radius* m_radius;
    }

    
private: 
    double m_radius{0.0};
    
    inline static double PI{3.14159265};
};


int main(){
   // we cant create object in shape class because we have virtual function inside.
   //Shape * shape_ptr = new Shape; // Compiler error

    const Shape * shape_rect = new Rectangle(10,10,"rect1"); // creating object.
    double surface = shape_rect->surface();
    std::cout << "dynamic type of shape_rect : " << typeid(*shape_rect).name() << std::endl; // you have to open in 'operator typeid' file to understand thid.
    std::cout << "The surface of shape rect is : " << surface << std::endl;


    std::cout << "--------------" << std::endl;

    const Shape * shape_circle = new Circle(10,"circle1");
    surface = shape_circle->surface();
    std::cout << "dynamic type of shape_circle : " << typeid(*shape_circle).name() << std::endl;
    std::cout << "The surface of the circle is : " << surface << std::endl;
    
    //  This allows us to call the functions of the dynamic objects by using arrat.
    Shape *shapes[] = { new Rectangle(10,10,"rect1"), new Circle(10,"circle1")};

    for (const Shape* shape : shapes) {
        std::cout << "Perimeter: " << shape->perimeter() << std::endl;
        std::cout << "Surface: " << shape->surface() << std::endl;
        std::cout << "--------------" << std::endl;
    }

    // Clean up
    for (const Shape* shape : shapes) {
        delete shape;
    }    

    return 0;
}