#include <iostream>

// static keyword in polymorphism.

class Shape
{
public:
    Shape(): Shape("NoDescription") {
    }    
    Shape(std::string_view description): m_description(description) {
        ++m_count;
    }    
    virtual ~Shape(){
        --m_count;
    }
    
    void draw( )const{
        std::cout << "Shape::draw() called for : " << m_description << std::endl;
    }
    
    virtual int get_count() const{
        return m_count;
    }
    
    static int m_count;
protected:
    std::string m_description;

};


class Ellipse : public Shape
{
public:
    Ellipse(): Ellipse(0.0,0.0,"NoDescription") {        
    }
    Ellipse(double x_radius, double y_radius, std::string_view description)
    : Shape(description), m_x_radius(x_radius), m_y_radius(y_radius)
    {
        ++m_count;
    }
    ~Ellipse(){
        --m_count;
    }
    
    virtual int get_count()const override{
        return m_count;
    }

    static int m_count;
	
private : 
    double m_x_radius;
    double m_y_radius;
};

int Shape::m_count{0}; // initialize static member variable.
int Ellipse::m_count{0};

int main(){

	//Shape
    Shape shape1("shape1");
    std::cout << "shape count : " << Shape::m_count << std::endl;//1
    
    Shape shape2("shape2");
    std::cout << "shape count : " << Shape::m_count << std::endl;//2
    
    Shape shape3;
    std::cout << "shape count : " << Shape::m_count << std::endl; // 3
    
    std::cout  << "***********************************************" << std::endl;
    
    //Ellipse
    Ellipse ellipse1(10,12,"ellipse1");
    std::cout << "shape count : " << Shape::m_count << std::endl;// 4
    std::cout << "ellipse count : " << Ellipse::m_count << std::endl;//1


    std::cout  << "***********************************************" << std::endl;

    //Shape polymorphism

    Shape* shapes[] {&shape1,&ellipse1};
    for(auto &s : shapes){
        std::cout << "count : " << s->get_count() << std::endl;
    }
   
    return 0;
}