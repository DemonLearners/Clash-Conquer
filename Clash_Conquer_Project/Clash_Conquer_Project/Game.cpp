// Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Area.h"
using namespace std;


int main()
{
	bool won = false;
	//Player player = new player;// could make this static
	//Puzzle puzzleControl = new puzzle;// could make this static 
	//MonsterManager monsterManagers[4] = { 4 new MonsterManager }
	//Area  areas[6] = { 6 new Area };
	//Area* pTownArea = areas[0];
	//Area* pCurrentArea = areas[0];
	//Area* pPrevArea = areas[0];
	//Display intro story
	cout << "welcome traveler blah blah blah\n";
	//while (!won)//&& player.Alive()
	//{
	//	Area* pUncheckArea = 0;
	//	pUncheckArea = (*pCurrentArea).EnterArea(pPrevArea);
	//	if (pUncheckArea != 0)
	//	{
	//		pPrevArea = pCurrentArea;
	//		pCurrentArea = pUncheckArea;
	//	}
	//	if (pCurrentArea == pTownArea)//check to see if the player has won
	//	{
	//		bool flag = false;
	//		for (int i = 0; i < areas.size(); i++)
	//		{
	//			if (areas[i].MonsterExist())
	//			{
	//				flag = true;
	//				break;
	//			}
	//		}

	//		if (!flag)
	//			won = true;
	//	}
	//}
	if (won)
		//Display message that the player won
		cout << "player won\n";
	else
		//Display message that the player has lost
		cout << " Game Over!\n";

	char holdScreen;
	cout << "Press any key and press enter to exit: ";
	cin >> holdScreen;
    
}

