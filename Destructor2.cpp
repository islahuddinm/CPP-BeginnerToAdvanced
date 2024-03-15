#include <iostream>

class animal {
public:
    std::string species;
    static int total;

    animal(std::string animalSpecies) {
        species = animalSpecies;
        ++total;
    }
    ~animal() { // when we create object by dynamic memory allocation, the destructor can not run automatically. so we have to run 'delete' operator to run destructor.
        --total;
        std::cout << "Decrement" << '\n';
    }
};

int animal::total = 0; // initialize static member variable.

int main() {

    animal *lion = new animal("Lion");
    animal *tiger = new animal("Tiger");

    std::cout << "Lion : " << lion->species << '\n';
    std::cout << "Tiger : " << tiger->species << '\n';
    std::cout << "Total of Created Object : " << animal::total << '\n';

    animal *bear = new animal("Bear");

    std::cout << "Total of Created Object : " << animal::total << '\n';

    delete lion; // delete object.

    std::cout << "Total of Created Object : " << animal::total << '\n';

    return 0;
}