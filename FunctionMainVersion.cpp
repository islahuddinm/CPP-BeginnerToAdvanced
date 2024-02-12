/*int main(int argc, char **argv): This version of 'main' is commonly used when you want to
access command-line arguments. You can use the values of 'argc' and 'argv' to process command-line inputs.

int main(): This version of 'main' is used when you don't need to handle command-line arguments.
It's a simpler form and is often used for basic programs or when command-line arguments are not required.*/

#include <iostream>

// Version with command-line arguments
int main(int argc, char **argv) {
    std::cout << "Number of arguments: " << argc << std::endl;

    // Print command-line arguments
    for (int i = 0; i < argc; ++i) {
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    }

    return 0;
}