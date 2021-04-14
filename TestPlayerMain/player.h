#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class player 
{
protected:
        /*member variables are protected to allow subclassing*/
        std::string name;
        char symbol;
public:
        /*Constuctors*/
        player(const std::string = "?", const char = '?'); // with name parameter with default value

        /*Accessors*/
        std::string get_player_name() const;
        char get_player_symbol() const;

        /*Mutators*/
        void set_player_name(const std::string);
        void set_player_symbol(const char);
};

#endif