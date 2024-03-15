#include <iostream>
#include <iomanip>

class cars {
public:
    cars() {
        std::cout << "Default costructor is called.\n";
    }
    cars(std::string brandParam, std::string typeParam, int yearsParam, double priceParam);
    ~cars();
    
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

    std::cout << brand << " " << type << " " << *years << " " << std::fixed << std::setprecision(0) << *price << '\n';
};

cars::~cars() { // Destructor is always have '~'(tilde sign) in prefix.

    delete years, price;
    
    std::cout << "Destructor called for address of " << brand << " : " << years << " & " << price << '\n';
};

void function2() {

    cars mclaren("Mclaren", "Spider 720", 2023, 1000000);
}

void function3(cars paganiParam) {

    
}

void function4() { // this is how to destruct explicitly.

    cars *lamborgini = new cars("Lamborgini", "Aventado", 2020, 3000000);

    delete lamborgini;
}

int main() {

    cars pagani("Pagani", "Hyura", 2022, 2000000);

    function2();
    function3(pagani); // this is how to put 'pagani' to function3 by parameter and the destructor will execute in function3.
    function4();

   // cars ferrari; // this create object and call default constructor.
    
    std::cout << "Done" << '\n';

    return 0;
}

// keep in mind if you want to understand this ///////////////////////////////////////////////////////////
// you have to know 'constructor, destructor, new, delete, and class files before.////////////////////////