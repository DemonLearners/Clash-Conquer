#pragma once
#include <iostream>
#include <vector>
#include <cctype> // used for converting character to lowercase

using namespace std;


class Hangman
{
private:
    const int GUESS_LIMIT = 6;
    bool checkGuess(string word, char guess, bool matched[]);
    void displayGameState(string word, bool matched[], int guesses);
    
public:
    int PlayGame();

       
};

