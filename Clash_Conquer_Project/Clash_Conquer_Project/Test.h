#pragma once
#include "Puzzle.h"
#include <iostream>
#include <vector>
#include "Player.h"
#include "MonsterManager.h"
#include <string>
using namespace std;
class Test
{
private:
	string name;
	bool locked;
	int puz;
	//Puzzle* pPuzzle;
	//MonsterManager* pMonsterManager;
	//Player* pPlayer;
	vector<Test*> neighbors;
	Test* pPrevious;
	Test* MoveToNeighbor(int choice);// -try to move to a neighbor area
	void DisplayAreaChoices();// -display your choice that the player can take in the area
	char ActivateBattleMode();// -goes into battle mode
	bool ActivatePuzzleMode();// -goes into puzzle mode
public:
	//Area(string name, bool lock);
	//Area(string name, bool lock, Puzzle* puzzle, MonsterManger* monsterM, int puzzleNum, Player* player, vector<Area*>  neighbors);
	bool MonsterExist();// -check if any monsters exist
	bool IsLocked();
	Test* EnterArea();// -The control center for the area
};

