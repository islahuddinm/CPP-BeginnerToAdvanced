
/*
a programming paradigm is refer to style ore patern of how code should be structured, organized, and
how algorithms should be designed. it defines the structure, oraginization, and flow of code.

here are some key programming paradigms:

- imperative programming paradigm is type of paradigm that gives the computer step by step instructions
to execute.

- procedural programming paradigm is paradigm type that exrends the imprerative paradigm by orginizing
code into reusable block called procedures or functions.

- functional programming paradigm is paradigm type that treats computation as the evaluation of
mathematical functions and avoids changing-state and mutable data. it focuses on mathematical functions.

- Object-oriented programming (OOP) is a programming paradigm based on the concept of "objects,"
which can contain data in the form of fields (often known as attributes or properties) and code,
in the form of procedures (often known as methods).

there are the core principles of OOP: abstraction, encapsulation, inheritance, and polymorphism.
Object-oriented programming languages, such as C++, Java, and Python, support these concepts and
provide features that facilitate their implementation.

- declarative programming paradigm is a style of programming where you express the logic of
a computation without explicitly describing its control flow. In other words, instead of telling
the computer how to do something (as in imperative programming), you describe what you want to achieve,
and the computer figures out how to do it.
*/

////////////////////////////////////////////////////////////////// this is imperative programming paradigm

#include <iostream>

int main() {
    int sum = 0; // Initialize sum to zero

    // Add each number from 1 to 10 to the sum
    for (int number = 1; number <= 10; ++number) {
        sum += number;
    }

    // Output the result
    std::cout << "The sum of the first ten natural numbers is: " << sum << std::endl;

    return 0;
}