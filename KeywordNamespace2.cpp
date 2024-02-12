#include <iostream>

//compiler will always start to read top project to below then start to working in main fuction (int main)

//namespace (keyword provides a solution for preventing name conflicts in large projects)
//each entity needs unique name. a namespace allows for indetically named entities as long as namespaces are different

namespace first{
    int x = 2;
}

namespace second{
    int x = 3;
}

int main(){
    
    using namespace first;
    using std::string;
    using std::cout;

    string character = "I have ";
   
    cout << character << x + second::x << '\n';

    return 0; //a way for main function send the message to user that this task is success or there are problems.
}