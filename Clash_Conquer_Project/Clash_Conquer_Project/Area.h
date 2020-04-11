#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Area
{
private:
	string name;
	bool locked;
	int puz;
	//Puzzle* pPuzzle;
	//MonsterManager* pMonsterManager;
	//Player* pPlayer;
	vector<Area*> neighbors;
	Area* pPrevious;
	Area* MoveToNeighbor(int choice);// -try to move to a neighbor area
	void DisplayAreaChoices();// -display your choice that the player can take in the area
	char ActivateBattleMode();// -goes into battle mode
	bool ActivatePuzzleMode();// -goes into puzzle mode
public:
	//Area(string name, bool lock, Puzzle* puzzle, MonsterManger* monsterM, int puzzleNum, Player* player, vector<Area*>  neighbors);
	bool MonsterExist();// -check if any monsters exist
	Area* EnterArea();// -The control center for the area
	

};

