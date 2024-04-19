#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 10};

    // Iterate over the vector using iterators
    for (auto it = numbers.begin(); it < numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

/* Sure! Here's a list of some common methods available for various standard library containers in C++:

Common Methods for Sequential Containers (std::vector, std::list, std::deque)
push_back(const T& value): Adds an element to the end of the container.
pop_back(): Removes the last element from the container.
push_front(const T& value): Adds an element to the beginning of the container (not available for std::vector).
pop_front(): Removes the first element from the container (not available for std::vector).
insert(iterator pos, const T& value): Inserts an element at the specified position.
erase(iterator pos): Removes the element at the specified position.
clear(): Removes all elements from the container.
size(): Returns the number of elements in the container.
empty(): Returns true if the container is empty, false otherwise.
begin(), end(): Return iterators pointing to the beginning and past-the-end positions of the container, respectively.

Common Methods for Associative Containers (std::set, std::map, std::unordered_set, std::unordered_map)
insert(const T& value): Inserts an element into the container (for std::set and std::unordered_set).
insert(const std::pair<const Key, T>& pair): Inserts an element into the container (for std::map and std::unordered_map).
erase(iterator pos): Removes the element at the specified position.
erase(const Key& key): Removes the element with the specified key.
find(const Key& key): Finds an element with the specified key.
clear(): Removes all elements from the container.
size(): Returns the number of elements in the container.
empty(): Returns true if the container is empty, false otherwise.
begin(), end(): Return iterators pointing to the beginning and past-the-end positions of the container, respectively.

Common Methods for std::string
append(const std::string& str): Appends a string to the end of the current string.
insert(size_t pos, const std::string& str): Inserts a string at the specified position.
erase(size_t pos, size_t len): Erases a portion of the string starting from the specified position.
clear(): Removes all characters from the string.
size(): Returns the number of characters in the string.
empty(): Returns true if the string is empty, false otherwise.
begin(), end(): Return iterators pointing to the beginning and past-the-end positions of the string, respectively.

These are just a few of the commonly used methods for these containers.
The actual methods availablemay vary depending on the container and the version of the C++ standard library
you are using.*/