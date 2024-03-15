#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <string_view>
#include "person.h"

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

class Player : public Person
{   
    // 'operator<<' as a friend function/ a function definition.    
    // 'out' is a variable that hold output operations.
    // 'player' is a class type that determine value type(object class).
    // 'playerParam' is a variable that hold class object.
    friend std::ostream& operator<<(std::ostream& out, const Player& playerParam);
public:
    Player() = default;
    Player(std::string_view game_param);
    
private : 
    std::string m_game{"None"};
};

#endif // PLAYER_H