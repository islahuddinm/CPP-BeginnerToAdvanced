#include <iostream>
#include <iomanip>

// 'this' keyword is a pointer that stores the memory address of the object.

/* When you use this, you are referring to the current object instance. This is particularly useful
when you have a member variable with the same name as a parameter in a member function, and
you need to differentiate between the two.*/

class cars {
public:
    cars(std::string brandParam, std::string typeParam, int yearsParam, double priceParam);
    ~cars();
    
    void setCars() {
        std::cout << brand << " " << type << " " << *years << " " << std::fixed << std::setprecision(0) << *price << " ////// This object is at " << this << '\n';
    }

    // Setter function is a method that is used to modify the value of a private or protected data member of a class.
    void setMclarenBrandYears(std::string brand, int years) {
        this->brand = brand; // this time 'this' keyword is used to avoid error of same name.
        // if we dont give 'this' we will not have any changes.
        *(this->years) = years; // this '*(this->years)' is how to modify a pointer.
    }

    // setter function is another method that is used to modify the value // chained calls using pointer.
    cars *setMclarenBrand(std::string brand) {
        this->brand = brand;    
        return this; // return this, 'this' contains/hold the memory address of current object.
    }
    cars *setMclarenYears(int years) {        
        *(this->years) = years;
        return this;
    }

    // setter function is another method that is used to modify the value // chained calls using reference.
    cars &setPaganiBrand(std::string brand) {
        this->brand = brand;    
        return *this; // return *this, '*this' contains/hold the memory address of current object.
    }
    cars &setPaganiYears(int years) {        
        *(this->years) = years;
        return *this;
    }
    
private:
    std::string brand;
    std::string type;
    int *years;
    double *price;
};

cars::cars(std::string brandParam, std::string typeParam, int yearsParam, double priceParam) { // Constructo

    brand = brandParam;
    type = typeParam;
    years = new int (yearsParam);
    price = new double (priceParam);

    std::cout << brand << " " << type << " " << *years << " " << std::fixed << std::setprecision(0) << *price << " ////// This object is at " << this << '\n';
};

cars::~cars() { // Destructor is always have '~'(tilde sign) in prefix.

    delete years, price;
    
    std::cout << "Destructor called for address of " << brand << " : " << years << " & " << price << '\n';
};

int main() {

    cars mclaren("Mclaren", "Spider 720", 2023, 1000000);
    mclaren.setMclarenBrandYears("Porsce", 2025);
    mclaren.setCars();
    // below this is another way to set value object by using pointer.
    mclaren.setMclarenBrand("Minicooper")->setMclarenYears(2026); // '->'(pointer access notation).
    mclaren.setCars();
    
    cars pagani("Pagani", "Hyura", 2022, 2000000);
    // below this is another way to set value object by using reference.
    pagani.setPaganiBrand("Ferrari").setPaganiYears(2026); // '.'(dot access notation) because we return reference.
    pagani.setCars();
    
    cars lamborgini("Lamborgini", "Aventado", 2020, 3000000);
    
    std::cout << "Done" << '\n';

    return 0;
}