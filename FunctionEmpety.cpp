#include <iostream>
#include <vector>

/* In C++, empty() is a member function that is used with containers like std::vector, std::string,
std::queue, etc., to check if the container is empty. It returns true if the container is empty and
false otherwise. Here's a basic example using std::vector:.*/

int main() {
    std::vector<int> numbers;

    if (numbers.empty()) {
        std::cout << "Vector is empty." << std::endl;
    } else {
        std::cout << "Vector is not empty." << std::endl;
    }

    return 0;
}

/* In this example, the empty() function is used to check if the numbers vector is empty.
Since it is empty initially, the output will be "Vector is empty."*/