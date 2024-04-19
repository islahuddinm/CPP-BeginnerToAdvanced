#include <iostream>

// syntax 5
std::integral auto add5(std::integral auto a) { // to this syntax we have to use "auto" if it is not it will have error.
    return a;
}

int main() {

    std::floating_point auto x = add5(7);
    // "std::floating_point" it is to constrain value is floating point if it is not it will be error.

    return 0;
}