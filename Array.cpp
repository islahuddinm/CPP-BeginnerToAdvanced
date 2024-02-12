#include <iostream>
#include <array>

//array is  a collection of items of same data type stored at contiguous memory locations.
//also array is a data structure that can hold multiple value.

int main2();
int main3();
void main4();
void main5();

int main() {

    //this is array data
    int a[10] = {2, 4, 5, 8, 11, 46, 56, 9, 89, 47}; //array start with "0". for example 0(2), 1(4), 2(5), 3(8), etc.

    for (int i = 0; i < std::size(a); i++) { //"std::size()" gives the number amount of elements in a container

        a[i] = i * 3; //we can also write array data like this instead of array data above(we reset data above with this data)
    }

    for (int i = 0; i < std::size(a); i++) { //you can use "i < 10;" instead of "i < std::size(a)"

        std::cout << "the value of interger is " << a[i] << '\n';
    }

    main2();
    main3();
    main4();
    main5();
    return 0;
}

int main2() { //its result does not work because there is no "b[5]" the maximum is "b[4]"

    int b[5] = {2, 4, 5, 8, 11};    

    std::cout << "b is " << b[5] << '\n';    

    return 0;
}

int main3() {

    int random[7] = {};
    std::string names[] = {"john", "carry", "gordon", "max"}; //we also can do without assign amount of array value in range, it will be fill automatically according to amount of array value in range

    for (int i = 0; i < std::size(names); i++) {

        std::cout << "names of employee is " << names[i] << '\n';
    }

    for (int i = 0; i < std::size(random); i++) { //it is for make random value

        random[i] = rand();

        std::cout << "random value is " << random[i] << '\n';
    }

    return 0;
}

void main4 () { //this loop is to just take array's value

    int score[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; //"score" is its container
    score[4] = 400; //modify array

    for (auto i : score) { //"i:" This is the loop variable that will take on the value of each element in the container/ range

        std::cout << i << '\n';
    }
}

void main5 () {

    int score[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    score[4] = 400;

    int sum;

    for (auto i : score) {
        
        sum+= i;
    }

    std::cout << "Score sum : " << sum << '\n'; //result is 473
}