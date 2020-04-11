#include "Area.h"
//Area(string name, bool lock, Puzzle* puzzle, MonsterManger* monsterM, int puzzleNum, Player* player, vector<Area*>  neighbors)
bool Area::MonsterExist()
{
	//If(*pMonsterManager).Cleared())
	return false;
	//Else
	//Return true;
}

Area* Area::EnterArea()
{
	//If MonsterExist()
	//Char result = ActivateBattleMode()
	//If result == ‘l’
	return this;
	//End if
	//If result == ‘r’
	//Return pPrevious;
	//End if
	//Endif
	//Int choice = 0
	//Bool correctValue = false
	//Do
	//DisplayChoices();
	//Cin >> choice;
	//If choice < 0 && choice > = neighbors.size()
	//Cout  “sorry that choice does not exist”
	//correctValue = false;
	//else
	//correctValue = true;
	//End if
	//While correctValue == false
	//Return moveToNeighbor(choice);

}

Area* Area::MoveToNeighbor(int choice)
{
	//if (neighbors[choice].IsLocked())
	//If ActivatePuzzleMode()
	//Return neighbors[choice];
	//Else
	return this;
	//Endif
	//Endif
	//Return neighbors[choice]
}

void Area::DisplayAreaChoices()
{
	//Cout message of the place your in with the choices you have
	//For int i = 0 to neighbors.size step 1
	//Cout i : neighbor name
	//endfor

}

char Area::ActivateBattleMode()
{
	return 'p';
	//char result = (*pMonsterManager).Battle()
	//If(result == ‘w’)
	////won
	//Else if (result == ‘r’)
	////retreated
	//Else if (result == ‘l’)
	////lost
	//Else
	////error
	//result = ‘e’;
	//endif
	//Return result;
}

bool Area::ActivatePuzzleMode()
{
	//If(*pPuzzle).PlayPuzzle(puz)
	//locked = false;
	return true;
	//Else
	//Return false;
	//endif

}

