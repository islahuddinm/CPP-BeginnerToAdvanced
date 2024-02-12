#include <iostream>

int main3() {

    int c = 1; //it's iterator (an object that can be used to loop through collections, like ArrayList and HashSet)

    do {

        std::cout << "value of c: " << c << '\n';
        c++;

        if (c == 10) {
            c++;

            continue; //it skip 10 value
        }

    } while (c < 20);

    return 0;
}

int main2() {

    int b = 1; //it's iterator (an object that can be used to loop through collections, like ArrayList and HashSet)

    do {

        std::cout << "value of b: " << b << '\n';
        b++;

        if (b > 10) {

            std::cout << "breaking loops" << '\n';

            break;
        }

    } while (b < 20);

    return 0;
}

int main() {

    for (int a = 1; a < 20; a++) {

        std::cout << "value of a is: " << a << '\n';

        if (a == 12) { //you can use ">" to break instead of "=="

            std::cout << "breaking loops" << '\n';
            
            break;
        }
    }
   
    main2();
    main3();
    return 0;
}