#ifndef PUZZLE_H
#define PUZZLE_h
#include <iostream>
#include <cctype> // used for converting character to lowercase
#include "WordScrambleGame.h"
#include "Hangman.h"

using namespace std;

class Puzzle{
private:
	Hangman h;
	WordScrambleGame w;
public:
	Puzzle();
	bool PlayPuzzle(int choice);
};

#endif
