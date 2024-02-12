#include <iostream>
#include <limits>

int main() {

    //std::numeric_limits<int>::max() function provide the minimum and maximum values
    std::cout << "The range of int is from : " << std::numeric_limits<int>::min() << '\n';
    std::cout << "The range of int is until : " << std::numeric_limits<int>::max() << '\n';
    std::cout << "The range of lowest int is : " << std::numeric_limits<int>::lowest();

    return 0;
}