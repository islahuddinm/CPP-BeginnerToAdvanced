#include "person.h"
#include "player.h"

Player::Player(std::string_view game_param)
: m_game(game_param)
{
    //first_name = "John"; Compiler errors
    //last_name = "Snow";
}

// Implementation of the output operator
// this functin can be called to output by just using 'object name' in main function.
/*playerParam is variable that hold all player class type.*/
std::ostream& operator<<(std::ostream& out, const Player& playerParam){
 
    out << "Player : [ game : "  << playerParam.m_game
         << " names : " << playerParam.get_first_name()
             << " " << playerParam.get_last_name() << "]";
    return out; //  this implementation is returned in main fuction.
}