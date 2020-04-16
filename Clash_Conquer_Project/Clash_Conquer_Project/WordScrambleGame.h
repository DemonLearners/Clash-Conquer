#ifndef WORDSCRAMBLEGAME_H
#define WORDSCRAMBLEGAME_H

#include <iostream>

using namespace std;

class WordScrambleGame{
private:
	int guessCount = 3;
	string word[3] = {"MICROSCOPE","TEMPERATURE","ELEPHANT"};
    string nword[3]={"PERCSOICMO","EMEERTRUAPT","ATEPLHEN"};
	string input;
	int point;
	void Initialize();
public:
	bool Play();
};

#endif
