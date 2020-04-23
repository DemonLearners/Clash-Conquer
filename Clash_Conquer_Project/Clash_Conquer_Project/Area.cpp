#include "Area.h"
Area::Area(string name, Player* player, MonsterManager* monsterM)
{
	this->name = name;
	locked = false;
	pMonsterManager = monsterM;
	pPlayer = player;
}
Area::Area(string name, Player* player, MonsterManager* monsterM, Puzzle* puzzle, int puzzleNum)
{
	this->name = name;
	locked = true;
	pPuzzle = puzzle;
	pMonsterManager = monsterM;
	puz = puzzleNum;
	pPlayer = player;
}
void Area::SetupAreaNeighbors(vector<Area*>  neighborList)
{
	neighbors =neighborList;
}
bool Area::MonsterExist()
{
	if(pMonsterManager->Cleared())
		return false;
	else
		return true;
}
bool Area::IsLocked()
{
	return locked;
}
Area* Area::EnterArea()
{
	
	if (MonsterExist())
	{
		char result = ActivateBattleMode();
		if (result == 'l')
			return this;
	
		if (result == 'r')
			return pPrevious;
	}
	cout << endl << name << endl;
	int choice = 0;
	bool correctValue = false;
	do
	{
		DisplayAreaChoices();
		cin >> choice;
		if (choice < 0 && choice >= neighbors.size())
		{
			cout << "sorry that choice does not exist\n";
			correctValue = false;
		}
		else
			correctValue = true;
	} while (correctValue == false);
	return MoveToNeighbor(choice);

}

Area* Area::MoveToNeighbor(int choice)
{
	if (neighbors[choice]->IsLocked())
	{
		if (ActivatePuzzleMode(neighbors[choice]))
			return neighbors[choice];
		else
			return this;
	}
	return neighbors[choice];
}

void Area::DisplayAreaChoices()
{
	cout << "Where do you choose to go\n";
	for (int i = 0; i < neighbors.size(); i++)
	{
		cout << "choice " << i<< ": " +  neighbors[i]->name<<endl;
	}
}

char Area::ActivateBattleMode()
{
	char result = pMonsterManager->Battle(pPlayer);
	return result;
	//if(result == 'w')
	////won
	//else if (result == ‘r’)
	////retreated
	//if (result == ‘l’)
	////lost
	//Else
	////error
	//result = ‘e’;
	//endif
	//Return result;
}

bool Area::ActivatePuzzleMode(Area* neighbor)
{
	if (neighbor->PlayPuzzle())
	{

		return true;
	}
	else
		return false;
}
bool Area::PlayPuzzle()
{
	if( pPuzzle->PlayPuzzle(puz))
		locked = false;
	return !locked;
}

