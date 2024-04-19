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

////////////////////////////////////////////////////////////////// this is functional programming paradigm

#include <iostream>
#include <vector>
#include <numeric>
#include <functional>

// A pure function that calculates the sum of a range of numbers
int sumRange(int start, int end) {
    return (end - start + 1) * (start + end) / 2; // Using the arithmetic series sum formula
}

// A higher-order function that takes a function and a vector, applies the function to each element, and returns a new vector
std::vector<int> map(const std::vector<int>& vec, const std::function<int(int)>& func) {
    std::vector<int> result;
    for (int value : vec) {
        result.push_back(func(value));
    }
    return result;
}

int main() {
    // A vector of the first ten natural numbers
    std::vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Using the map function to apply a lambda that squares each number
    std::vector<int> squares = map(numbers, [](int x) { return x * x; });

    // Calculating the sum of the squares using the standard library accumulate function
    int sumOfSquares = std::accumulate(squares.begin(), squares.end(), 0);

    std::cout << "The sum of the squares of the first ten natural numbers is: " << sumOfSquares << std::endl;

    // Demonstrating the use of a pure function by calculating the sum of a range
    int sum = sumRange(1, 10);
    std::cout << "The sum of the first ten natural numbers is: " << sum << std::endl;

    return 0;
}
