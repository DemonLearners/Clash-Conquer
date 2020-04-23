//#include "Test.h"
////Area(string name, bool lock, Puzzle* puzzle, MonsterManger* monsterM, int puzzleNum, Player* player, vector<Area*>  neighbors)
//bool Area::MonsterExist()
//{
//	//If(*pMonsterManager).Cleared())
//	return false;
//	//Else
//	//Return true;
//}
//bool Area::IsLocked()
//{
//	return locked;
//}
//Area* Area::EnterArea()
//{
//	//If MonsterExist()
//	//Char result = ActivateBattleMode()
//	//If result == ‘l’
//	return this;
//	//End if
//	//If result == ‘r’
//	//Return pPrevious;
//	//End if
//	//Endif
//	int choice = 0;
//	bool correctValue = false;
//	do
//	{
//		DisplayAreaChoices();
//		cin >> choice;
//		if (choice < 0 && choice >= neighbors.size())
//		{
//			cout << "sorry that choice does not exist\n";
//			correctValue = false;
//		}
//		else
//			correctValue = true;
//	} while (correctValue == false);
//	return MoveToNeighbor(choice);
//
//}
//
//Area* Area::MoveToNeighbor(int choice)
//{
//	if (neighbors[choice]->IsLocked())
//	{
//		if (ActivatePuzzleMode())
//			return neighbors[choice];
//		else
//			return this;
//	}
//	return neighbors[choice];
//}
//
//void Area::DisplayAreaChoices()
//{
//	cout << "Where do you choose to go\n";
//	for (int i = 0; i < neighbors.size(); i++)
//	{
//		cout << "choice " << i << ": " + neighbors[i]->name;
//	}
//}
//
//char Area::ActivateBattleMode()
//{
//	return 'p';
//	//char result = (*pMonsterManager).Battle()
//	//If(result == ‘w’)
//	////won
//	//Else if (result == ‘r’)
//	////retreated
//	//Else if (result == ‘l’)
//	////lost
//	//Else
//	////error
//	//result = ‘e’;
//	//endif
//	//Return result;
//}
//
//bool Area::ActivatePuzzleMode()
//{
//	//If(*pPuzzle).PlayPuzzle(puz)
//	//locked = false;
//	return true;
//	//Else
//	//Return false;
//	//endif
//
//}
//
