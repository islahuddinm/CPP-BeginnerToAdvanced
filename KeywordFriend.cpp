#include <string>
#include <iostream>
#include <string_view>

/* 'friend' keyword is used to enables any class to access private and protected members of other classes and
functions of other classes. The friend keyword allows you to designate a function or another class
as a friend of your class.

'std::ostream' is a class type in C++ that enables to output stream with data in class scope with
different data types. It's often used in combination with the insertion operator << to output data to
output device.

'operator<<' function is able to access the 'name' and 'experienceYears' members of the 'civilEngineer' class
because it is declared as a friend inside the class. This allows you to use the '<<' operator to easily print
'civilEngineer objects'.

By declaring it as a friend function inside the civilEngineer class, this function gains access to the private
and protected members of the civilEngineer class, which allows it to print the object's state.*/

class Person
{   
    // 'operator<<' as a friend function/ a function definition.    
    // 'out' is a variable that hold output operations.
    // 'player' is a class type that determine value type(object class).
    // 'playerParam' is a variable that hold class object.
    friend std::ostream& operator<<(std::ostream& out, const Person& person){
        // this functin can be called to output by just using 'object name' in main function.
        out << "Person [" << person.first_name << " " << person.last_name << "]";
        return out;
    }
public:
    Person(){}
    Person(std::string& first_name_param, std::string& last_name_param)
    //: first_name(first_name_param), last_name(last_name_param)
    {
    }

    ~Person(){}
    
    //Getters
    std::string get_first_name() const{
        return first_name;
    }
    
    std::string get_last_name() const{
        return last_name;
    }
	
    //Setters
    void set_first_name(std::string_view fn){
        first_name = fn;
    }
    void set_last_name(std::string_view ln){
        last_name = ln;
    }    
    
    void set_middle_name(std::string_view ln){
        middle_name = ln;
    }

private : 
    std::string first_name{"Mysterious"};
    std::string last_name{"Person"};
    std::string middle_name{"Middle"};
};



class Player : public Person
{       
    // Implementation of the output operator
    // this functin can be called to output by just using 'object name' in main function.
    /*playerParam is variable that hold all player class type.*/
    friend std::ostream& operator<<(std::ostream& out, const Player& playerParam){
    
        out << "Player : [ game : "  << playerParam.m_game
            << " names : " << playerParam.get_first_name()
                << " " << playerParam.get_last_name() << "]";
        return out; //  this implementation is returned in main fuction.
    }
public:
    Player() = default;
    Player(std::string_view game_param)
    : m_game(game_param) // this is another way initialize a variable.
    {
        //first_name = "John"; Compiler errors
        //last_name = "Snow";
    }
    
private : 
    std::string m_game{"None"};
};



int main(){

    Player p1("Basketball");
    p1.set_first_name("John");
    p1.set_last_name("Snow");
    
    std::cout << "player : " << p1 << std::endl;
   
    return 0;
}