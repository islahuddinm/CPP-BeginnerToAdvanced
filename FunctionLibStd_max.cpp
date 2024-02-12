#include<iostream>
#include<algorithm>

int main() {
    // Comparison of integers.
    std::cout << std::max(2,5) << "\n";
    
    // Comparison of floating point numbers.
    std::cout << std::max(2.2,5.4) << "\n";
    
    // Comparison of characters using ASCII values.
    std::cout << std::max('x','y') << "\n";
	
    // Comparison of strings.
    std::cout << std::max("abc","abd") << "\n";
    
    // Comparison of the same numbers.
    // The first number is returned if both numbers are the same.
    std::cout << std::max(10,10);

    return 0;
}