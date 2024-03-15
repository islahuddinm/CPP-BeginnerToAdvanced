#include <iostream>
#include <vector>

/* std::vector is a standard library class in C++ that represents a dynamic array. It provides functionalities
similar to arrays but with additional features such as dynamic resizing, insertion and deletion of elements at
the end, and efficient random access to elements.*/

int main() {
    // Create a vector of integers
    std::vector<int> vec;

    // Add elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Access elements using [] operator
    std::cout << "Elements in vector: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }

    return 0;
}

/* In this example, std::vector<int> vec; creates an empty vector of integers. push_back is used to add
elements to the vector, and the [] operator is used to access elements by index. The size() function returns
the number of elements in the vector.*/