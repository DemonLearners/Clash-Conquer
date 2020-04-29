
#include <iostream>
#include <vector>
#include "Puzzle.h"
#include "MonsterManager.h"
using namespace std;
class Area
{
private:
	string name;
	bool locked;
	int puz=0;
	Puzzle* pPuzzle=0;
	MonsterManager* pMonsterManager=0;
	Player* pPlayer;
	vector<Area*> neighbors;
	Area* pPrevious;
	Area* MoveToNeighbor(int choice);// -try to move to a neighbor area
	void DisplayAreaChoices();// -display your choice that the player can take in the area
	char ActivateBattleMode();// -goes into battle mode
	bool ActivatePuzzleMode(Area* neighbor);// -goes into puzzle mode
	bool PlayPuzzle();
public:
	Area(string name, Player* player, MonsterManager* monsterM);
	Area(string name, Player* player, MonsterManager* monsterM,Puzzle* puzzle, int puzzleNum);
	void SetupAreaNeighbors(vector<Area*>  neighborList);
	bool MonsterExist();// -check if any monsters exist
	bool IsLocked();
	Area* EnterArea();// -The control center for the area
	

	

};

