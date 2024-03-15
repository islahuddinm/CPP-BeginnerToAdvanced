#include <iostream>

// argc is argument count. argc it tell you how many element in argv.
// argv[] is argument vector is an array of pointers that contain elements.

/* we can initialize elements in 'argv[]' when we are typing in terminal.
by ./ArgcArgv.exe Test1 Test2 Test3 */

/* long int strtol(const char* str, char** endptr, int base);

'str' is the input string to be converted.
'endptr' is a pointer to a pointer to char. If endptr is not NULL, the function stores the address of the first character after the number in the string in the pointer pointed to by endptr. This is useful for further processing or error checking. It allows you to see where in the original string the numeric conversion stopped.
'base' specifies the number base (radix) for the conversion, which can be between 2 and 36, or 0 for automatic detection based on the string format.*/

int main(int argc, char *argv[]) {

    for (int i = 0; i < argc; ++i) {
        std::cout << "Loop " << i << ": " << argv[i] << '\n';
    }

    int result = 2;
    for (int i = 0; i < argc; ++i) {
        int x = std::strtol(argv[i], NULL, 0); // 'std::strtol' is process of converting a string to a long integer.
        // 'NULL' is represent a pointer to char *argv[] but in this case NULL means it does not store anything.
        // '0' for automatic detection of the base based on the string format.
        /* int sum = result * x;
        std::cout << "Result " << sum << '\n';  */      
    }

    const char* str = "123xyz";
    char* endptr;
    long int num = std::strtol(str, &endptr, 0); // 'std::strtol' is process of converting a string to a long integer.
    // num will be '123', and endptr will point to the character 'xyz'.
    // 'endptr' is represent a pointer to char *argv[] to get string.
    // '0' for automatic detection of the base based on the string format.
    std::cout << "num var. : " << num << '\n';
    std::cout << "endptr var. : " << endptr << '\n';

    return 0;
}