#include <iostream>
#include <vector>

/* In C++, the front() function is used with containers like std::vector, std::deque, and
std::list to access the first element of the container. For example:*/

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "First element: " << vec.front() << std::endl; // output is '1'.
    return 0;
}

/* It's important to note that front() will cause undefined behavior if called on an empty container.
Always check if the container is empty before using front().*/