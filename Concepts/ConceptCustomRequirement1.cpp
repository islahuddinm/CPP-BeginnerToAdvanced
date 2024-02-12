#include <iostream>

/* "concept" is a keyword introduced to support the concept feature. When defining concepts or
using them in template constraints, you use the concept keyword to declare a custom concept.*/

// built custom concept
// just enable integral value
template <typename T>
concept MyConcept = std::is_integral_v<T>; // "concept" is a keyword to built concept. "MyConcept" is specified concept name. "std::is_integral_v<T>" is requierment which required be concept or aim is became to be concept.

// just enable multipliable value
template <typename T>
concept Multipliable = requires(T a, T b) { // "concept" is a keyword to built concept. "Multipliable" is specified concept name. "requires and body" is requierment which required be concept or aim is became to be concept.
    a * b;
};

// just enable incrementable value
template <typename T>
concept Incrementable = requires(T a, T b) { // // "concept" is a keyword to built concept. "Incrementable" is specified concept name. "requires and body" is requierment which required be concept or aim is became to be concept.
    a+=1;
    ++a;
    a++;
};

/////////////////////////////////////////////////////////////////////////////// border

// execution by sintax 1
template <typename T>
requires MyConcept<T>
T function (T a) {
    return a;
}

// execution by sintax 2
template <MyConcept T>
T function2(T a) {
    return a;
}

// execution by sintax 3
auto function3(MyConcept auto a) {
    return a;
}

// execution by sintax 4
template <typename T>
T function4(T a) requires MyConcept<T>{
    return a;
}

// execution by sintax 5
template <typename T>
MyConcept auto function5(MyConcept auto a) {
    return a;
}

// execution multipliable concept
template <typename T>
requires Multipliable<T>
T function6(T a, T b) {
    return a * b;
}

// execution multipliable concept
template <typename T>
requires Incrementable<T>
T function6(T a) {
    return a+=5;
}

/////////////////////////////////////////////////////////////////////////////// border

int main() {

    int a = 5;
    int b = 5;

    std::cout << "myconcept result : " << function(a) << '\n';
    std::cout << "multipliable result : " << function6(a, b) << '\n';
    std::cout << "incrementable result : " << function6(b) << '\n';

    return 0;
}