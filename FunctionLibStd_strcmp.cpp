#include <iostream>
#include <cstring>

/*Lexicographical refers to the order of words based on the alphabetical order of their characters.
In lexicographical order, words are arranged according to the sequence of their characters,
similar to how they would appear in a dictionary.*/

//null-terminated character arrays (a C-style string or a sequence of characters in memory where the end of the string is marked by the null character ('\0').).
//Lexicographically refers to the order of characters based on their ASCII or Unicode values
//Lexicographical comparison is a method of comparing two strings based on the order of their characters, considering their ASCII or Unicode values.

//std::strcmp is a function that is used to comparing two null-terminated byte strings lexicographically.

/*
Keep in mind that std::strcmp only works with null-terminated strings,
and it counts characters until the null terminator is encountered
*/

int main() {

    char *str1 = "zipple";
    char *str2 = "banana";
    char *str3 = "coconut";
    char *str4 = "orange";
    size_t str5 = 3;
    char *str6 = "zipple";
    
    int result = std::strcmp(str4, str1); //we will get negative value because "o" of "orange" in str4 appears after "z" of "zipple" in str1 variable according to ASCII (this is wrong). in ASCII "o" don't apears after "z". so "o" value lees than "z" value in ASCII (less is negative)
    int result2 = std::strncmp(str1, str2, str5); //we will get positive value because "z" of "zipple" in str1 variable appears after "b" of "banana" in str2 and "3" in str5 according to ASCII (this is true). in ASCII "z" apears after "o". so "z" value more than "o" value in ASCII (more is positive)
    int result3 = std::strcmp(str1, str6); //we will get zero value because str1 & str6 are equal
    int result4 = std::strcmp(str2, str3); //str2 less than str3 (less is negative). "b" = 98 of "banana" and "c" = 99 of "coconut" in ASCII.

    std::cout << "str1 : " << str1[1] << '\n';
    std::cout << "str1 : " << *str1 << '\n';
    std::cout << "result is : " << result << '\n';
    std::cout << "result2 is : " << result2 << '\n';
    std::cout << "result3 is : " << result3 << '\n';
    std::cout << "result4 is : " << result4 << '\n';

    
    if (result < 0) {

        std::cout << str1 << " less than " << str4 << '\n';
    }

    else if (result == 0) {

        std::cout << str1 << " equal to " << str4 << '\n';
    }

    else if (result > 0) {

        std::cout << str1 << " greater than " << str4 << '\n';
    }

    return 0;
}