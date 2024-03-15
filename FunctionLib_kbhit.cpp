#include <iostream>
#include <conio.h> // Include the console I/O header for _kbhit() and _getch()

/* In C++, '_kbhit()' is a function that checks if a keyboard key has been pressed. It is commonly used in
console-based applications to detect if a key has been pressed without blocking the program's execution.
This function is part of the '<conio.h>' header, which is not a standard C++ header and is specific to
certain compilers, like older versions of Microsoft Visual C++. If you are using a different compiler or
a more modern version of Visual Studio, you may need to use alternative methods to achieve
the same functionality, as '_kbhit()' is not portable.*/

/* you can modify the program to wait for a specific key press by using '_getch()' or '_getwch()'
(for wide characters) to get the key code of the pressed key and then comparing it with the desired key's code.
Note that '_getch()' reads a single character from the keyboard*/

int main() {
    std::cout << "Press 'q' to stop the loop..." << std::endl;

    while (true) { // Infinite loop
        if (_kbhit()) { // Check if a key has been pressed
            char ch = _getch(); // Get the pressed key without echoing it
            if (ch == 'q' || ch == 'Q') { // Check if the key is 'q' or 'Q'
                break; // Exit the loop if 'q' is pressed
            }
        }
        // Perform your repetitive task here
        // Using a sleep here to prevent the loop from spinning too fast and consuming significant CPU resources.
        _sleep(1000); // Sleep for 1000 milliseconds (1 second)
        std::cout << "Waiting for 'q' key press..." << std::endl;
    }

    std::cout << "'q' key pressed. Exiting program." << std::endl;
    return 0;
}
