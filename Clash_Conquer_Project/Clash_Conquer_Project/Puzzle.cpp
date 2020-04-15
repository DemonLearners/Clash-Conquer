#include <iostream>
#include <algorithm>
#include "WordScrambleGame.h"
#include "Hangman.h"
#include "Puzzle.h"

using namespace std;

void Puzzle::Hangman(void){
	h.PlayGame();
}

void Puzzle::WordScrambleGame(void){
	w.Play();
}
