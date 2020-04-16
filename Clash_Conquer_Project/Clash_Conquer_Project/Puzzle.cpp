#include <iostream>
#include <algorithm>
#include "WordScrambleGame.h"
#include "Hangman.h"
#include "Puzzle.h"

using namespace std;

Puzzle::Puzzle()
{

}
bool Puzzle::PlayPuzzle(int choice){
	if (choice == 1)
		return h.PlayGame();
	else if (choice == 2)
		return w.Play();
	else
		return false;
}


