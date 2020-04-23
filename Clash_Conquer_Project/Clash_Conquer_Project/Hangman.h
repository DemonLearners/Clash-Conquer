#pragma once
#include <iostream>
#include <vector>
#include <cctype> // used for converting character to lowercase
#include <array>
using namespace std;


class Hangman
{
private:
    const int GUESS_LIMIT = 6;
    bool checkGuess(string word, char guess, bool matched[],int &right);
    void displayGameState(string word, bool matched[], int guesses);
    
public:
    bool PlayGame();

       
};

