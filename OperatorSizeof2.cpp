#include <iostream>
#include <iomanip>

class cars {
public:
    cars(std::string brandParam, std::string typeParam, int yearsParam, double priceParam);
    ~cars();

    void setCars() {
        double setBrand;
    }
    
private:
    char *character6 = "hallo world";
    std::string brand; // size(32)
    std::string type; // size(32)
    int *years; // size(8)
    double *price; // size(8)
};

cars::cars(std::string brandParam, std::string typeParam, int yearsParam, double priceParam) { // Constructo

    int newCars;

    brand = brandParam;
    type = typeParam;
    years = new int (yearsParam);
    price = new double (priceParam);

    std::cout << brand << " " << type << " " << *years << " " << std::fixed << std::setprecision(0) << *price << '\n';
};

cars::~cars() { // Destructor is always have '~'(tilde sign) in prefix.

    delete years, price;
    
    std::cout << "Destructor called for address of " << brand << " : " << years << " & " << price << '\n';
};

int main() {

    cars pagani("Pagani", "Hyura", 2022, 2000000);    
    
    std::cout << "Done" << '\n' << '\n';
    // below is a size of class. size of class is amount of some member variables in class.
    // curently member variables is 2 'string', 1 'int' pointer, and 1 'double'.
    std::cout << "Sizeof(char*) : " << sizeof(char*) << '\n';
    std::cout << "Sizeof(string brand) : " << sizeof(std::string) << '\n';
    std::cout << "Sizeof(string type) : " << sizeof(std::string) << '\n';
    std::cout << "Sizeof(int years*) : " << sizeof(int*) << '\n';
    std::cout << "Sizeof(double price*) : " << sizeof(double*) << '\n';
    std::cout << "Sizeof(cars class) : " << sizeof(cars) << '\n' << '\n';
    /* keep in mind! size of class is only count member variable in class, dont count member variable of
    member function in class.
    
    size of class is determined by member variables in class.*/ 

    return 0;
}