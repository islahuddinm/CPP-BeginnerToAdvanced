#include <iostream>

//how conditional statment work? if there are statment is TRUE they will break out and they will not continue to execute anymore eventhough there is TRUE statment again.
using namespace std;

int main2();
int main3();
int main4();

int main() {

    if (false) {

        cout << "The condition is TRUE" << '\n';
    }

    else {

        cout << "The condition is FALSE" << '\n';
    }
    
    main2();
    main3();
    main4();
    return 0;
}

int main2() {

    int a = 10;

    if (a < 6) { //a is not greter than 6

        cout << "TRUE (main2)" << '\n';
    }

    else {

        cout << "FALSE (main2)" << '\n';
    }
    return 0;
}

int main3() {

    int a = 10;

    if (a < 6) { //a is not greter than 6

        cout << "FALSE (main3)" << '\n';
    }
    
    else if (a == 10) {

        cout << "TRUE0 (main3)" << '\n';
    }

    else if (a > 3) {

        cout << "TRUE1 (main3)" << '\n';
    }

    else if (a > 5) {

        cout << "TRUE2 (main3)" << '\n';
    }
    return 0;
}

int main4() { //if statment in main4 is nothing to be true they will not be executed because there is no "else"

    int a = 10;

    if (a < 6) { //a is not greter than 6

        cout << "FALSE1 (main4)" << '\n';
    }

    else if (a < 3) {

        cout << "FALSE2 (main4)" << '\n';
    }

    else if (a < 5) {

        cout << "FALSE3 (main4)" << '\n';
    }

    //else {

    //    cout << "FALSE4 (main4)" << '\n';
    //}
    return 0;    
}