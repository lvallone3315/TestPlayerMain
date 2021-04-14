// TestPlayerMain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Program tests out Player class by reading input from console, calling Player functions to store data
//

#include <iostream>
#include <string>
#include "player.h"

using namespace std;

#define MAX_NAME_SIZE 24             // maximum name size, no constraints on characters, truncate characters after name, remove CR/NL when storing
#define MAX_SYMBOL_SIZE 1            // maximum symbol size, no constraints on characters
#define NUM_PLAYERS 3                // # of player instances

int main()
{
    string name;                       // temporary storage for reading player name from console
    char symbol;                    // temporary storage for reading 
    string buffer;

    player playerArray[NUM_PLAYERS];

    std::cout << "Hello World!\n";
    
    // create player instances
    
    // populate players - loop through defined number of players
    for (int loopcounter = 0; loopcounter < NUM_PLAYERS-1; loopcounter++) {

        // read input, getline removes newline but allows all other characters as valid, up to max name size
        // input with newline only are invalid, prompt again for player name
        // ToDo: display error message
        buffer = "";
        while (buffer.length() == 0) {
            cout << "Enter Player Name: ";
            getline(cin, buffer, '\n');
            if (buffer.length() > MAX_NAME_SIZE) {
                buffer.erase(MAX_NAME_SIZE);
            }
            cout << "Player Name: " << buffer << "\n";   // will replace with call to create instance with player name
        }
        playerArray[loopcounter].set_player_name(buffer);

        // same as above, except symbol is only a single character
        // if more than one character entered, truncate to 1st character
        buffer = "";
        while (buffer.length() == 0) {
            cout << "Enter Player symbol: ";
            getline(cin, buffer, '\n');
            if (buffer.length() > MAX_SYMBOL_SIZE) {
                buffer.erase(MAX_SYMBOL_SIZE);
            }
            cout << "Player Symbol: " << buffer << "\n";   // will replace with call to create instance with player name
        }
        playerArray[loopcounter].set_player_symbol(buffer[0]);

    }  // end player information input from console & storage in player instances

    // Retrieve information for all created players & print
    cout << "*** Printing Player information ***\n";
    for (int loopcounter = 0; loopcounter < NUM_PLAYERS; loopcounter++) {
        cout << playerArray[loopcounter].get_player_name() << " \t" << playerArray[loopcounter].get_player_symbol() << "\n";
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
