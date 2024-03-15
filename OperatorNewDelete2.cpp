#include <iostream>

// here how to use 'new' and 'delete' at the runtime by using array /////////////////////////////////////

int main() {

    int size;

    std::cout << "Assign size of array : ";
    std::cin >> size;

    int *array = new int[size];
    
    for (int i = 0; i < size; ++i) {

        std::cout << "Array [" << i << "] = ";
        std::cin >> array[i];       
    }

    std::cout << "Result : ";

    for (int i = 0; i < size; ++i) {
        
        std::cout << array[i] << ", ";
        //std::cout << *(array+i) << ", "; // another way to print array.
    }

    delete [] array;
    return 0;
}