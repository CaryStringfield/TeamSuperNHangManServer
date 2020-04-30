#pragma once

#include <iostream>
#include <string>


using namespace std;


class HangGameProcess
{

private:
    int currentRound = 1;
    string word;

public:

    //Creates GameID
    void newGame() {
        string gameID = "develope system/agorythim to produce a the gameID";
        //HangModel may not be the name of any actual model.
        //HangModel might be a conclomeration class holding other modes but using gameID as key
         //It's a term to describe all the data holding classes.
        //store sata in model
        setWord();
        HangModel(gameID, username, password, numberOfPlayers, numberOfRounds, word);
        getGameUpdate(gameID);
    }

    //Gets new word each round
    void setWord() {

        //get word from the word generator at the begining of each round.
        /*if (currentRound == 0){
        this.word = WordGenerator.getWord();
        }*/
    }

    //Checks letter and word guesses
    int letterGuess(char letter, string gameID, string username) {

        //loop thorugh each letter in the word if the letter is in the word
        // award 10 points for each occurence of that letter.
        //if the letter is not in the word -5 points
        //points will be stored in the model under the gameID then the username
        //if the letter is in the word return the position for each occurence of that letter
        //add the letter to the letters used model
        //else
        return -1;//letter not in the word

    }

    void wordGuess(string guess, string gameID, string username) {

        if (guess.equals(word); {
            //check for new letters entered. new letters being 
            //letters that have not been guessed this round
            //player gets 10 points per letter.
            //player gets 100 additional points.
            //player dclared winner for this round
            if (lastRound(gameID)) {//here should also see if all the letters have been guesses.  If so this player is round winner
                declareGameWinner(gameID, username); //               
            }
        }
        else
        {
            //player looses 100 points and is elinated from the round.
        }
    }

    //Checks for LastRound
    bool  lastRound(gameID) {
        //called by checkWordGuess when the guess is correct and the round
        //has been won.  If that was the final round an overall winner
        //can be declared
        //get total number of rounds for the gameID from the model
        currentRound++;
        /*if (currentRound > HangModel.getTotalRounds()) {
            retrun true;
        }
        else {
            return false;
        }*/
    }

    void awardPoints(int points) {
        //call this function to award or deduct points from a player.
        //store those points in model
    }

    getGameUpdate(string gameID) {

        //gather all relavent info from this class and the model classes
        //send to marshler.

    }
};

