#include "Puzzle.h"
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


