#include "player.h"

player::player(const std::string name_arg, const char symbol_arg)
        :name(name_arg), symbol(symbol_arg) //members are initialized in this initializer list
{
//body not needed
}
/*definitions of member functions defined in player.h*/
std::string player::get_player_name() const
{
        return name;
}

char player::get_player_symbol() const
{
        return symbol;
}

void player::set_player_name(const std::string name_arg)
{
        name = name_arg;
}

void player::set_player_symbol(const char symbol_arg)
{
        symbol = symbol_arg;
}