#include "WordScrambleGame.h"
#include "Hangman.h"

class Puzzle{
private:
	Hangman h;
	WordScrambleGame w;
public:
	Puzzle();
	bool PlayPuzzle(int choice);
};

