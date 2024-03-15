#include <iostream>

// before you do this, suggest to understand 'class'.

class square {
private:
    int sideLenght;
    /* static  */int areaTotal; // a nonstatic data member may not be defined outside its class.
    static int areaSum;
    
    static void incrementAreaSum() {
        ++areaSum;
    }

public:
    square(int lenght) {
        sideLenght = lenght;        
    }

    int area() {
        ++areaTotal;
        ++areaAmount;
        incrementAreaSum();
        return sideLenght * sideLenght;        
    }

    int getSideLenght() {
        return sideLenght;
    }
    int getAreaTotal() {
        return areaTotal;
    }
    static int getAreaSum() {
        return areaSum;
    }
    static int areaAmount;
};

int square::areaTotal = 0; // initialize 'static variable'.
int square::areaAmount = 0;
int square::areaSum = 0;

int main() {

    square square1(5);

    std::cout << "Square1 Area : " << square1.area() << '\n';    

    std::cout << "Area Total : " << square1.getAreaTotal() << '\n';
    std::cout << "Area Amount : " << square1.areaAmount << '\n'; // we also can use 'square::' prefix
    std::cout << "Area Sum : " << square::getAreaSum() << '\n'; // we also can use 'square1.' prefix

    std::cout << "Square1 Area : " << square1.area() << '\n';

    std::cout << "Area Total : " << square1.getAreaTotal() << '\n';
    std::cout << "Area Amount : " << square1.areaAmount << '\n';
    std::cout << "Area Sum : " << square::getAreaSum() << '\n';

    return 0;
}