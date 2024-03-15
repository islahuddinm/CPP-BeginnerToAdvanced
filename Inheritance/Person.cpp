#include "person.h"

Person::Person(){
}

Person::Person(std::string& first_name_param, std::string& last_name_param)
    //: first_name(first_name_param), last_name(last_name_param)
{
}

// this functin can be called to output by just using 'object name' in main function.
std::ostream& operator<<(std::ostream& out , const Person& person){
    out << "Person [" << person.first_name << " " << person.last_name << "]";
    return out;
}


Person::~Person()
{
}


void Person::set_middle_name(std::string_view ln){
        middle_name = ln;
    }