#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    // Seed the random number generator with current time
    std::srand(std::time(0));

    // Generate a random number
    int random_number = std::rand();
    
    // Print the random number
    std::cout << "Random Number: " << random_number << std::endl;

    return 0;
}