#include "HangGameProcess.h"
#include <iostream>
#include <string>


using namespace std;


int main(int argc, char* argv[]) {

    HangGameProcess process;
    //loop through argv[] to see what's inside.


    //if it contains username, password, number_of_players,  this is a new game
    process.newGame(string username, string password, int number_of_player);
    //if it contains username, password, gameID,  this is a new player joining an existing game
    process.addNewPlayer(string username, string password, string gameID);
    //if it contains username, gameID, letter,  this is a letter guess
    process.letterGuess(string username, string gameID, char letter);
    //if it contains username, gameID, word,  this is a word guess
    process.wordGuess(string username, string gameID, string word);
        //if it contains username, gameID, quit,  this is a player quitting the game
    process.playerQuit(string gameID, string username);
        //there could be a timeout or other error process those    

}