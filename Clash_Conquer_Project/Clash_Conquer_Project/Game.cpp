// Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Area.h"
#include "Player.h"
#include "MonsterManager.h"
using namespace std;


int main()
{
	bool won = false;
	Player player;// could make this static
	Puzzle puzzleControl;// could make this static 
	MonsterManager monsterManagers[5] = {MonsterManager(0), MonsterManager(2),MonsterManager(3),MonsterManager(4),MonsterManager(5) };
	Area  areas[5] = {Area("Town", &player,&monsterManagers[0]),Area("Fields", &player,&monsterManagers[1]),
		Area("Forest", &player,&monsterManagers[2]),Area("Caves", &player,&monsterManagers[3],&puzzleControl,1),
		Area("Monster Lair", &player,&monsterManagers[4],&puzzleControl,2) };
	//set the neighbors for the areas
	areas[0].SetupAreaNeighbors({ &areas[1] });
	areas[1].SetupAreaNeighbors({ &areas[0],&areas[2] });
	areas[2].SetupAreaNeighbors({ &areas[1],&areas[3] });
	areas[3].SetupAreaNeighbors({ &areas[2],&areas[4] });
	areas[4].SetupAreaNeighbors({ &areas[3] });
	Area* pTownArea = &areas[0];
	Area* pCurrentArea = &areas[0];
	Area* pPrevArea = &areas[0];
	//Display intro story
	cout << "welcome traveler blah blah blah\n";
	while (!won && player.Alive())
	{
		Area* pUncheckArea = 0;
		
		pUncheckArea = pCurrentArea->EnterArea();
		if (pUncheckArea != 0)
		{
			pPrevArea = pCurrentArea;
			pCurrentArea = pUncheckArea;
		}
		if (pCurrentArea == pTownArea)//check to see if the player has won
		{
			bool flag = false;
			for (int i = 0; i < 5; i++)
			{
				if (areas[i].MonsterExist())
				{
					flag = true;
					break;
				}
			}

			if (!flag)
				won = true;
		}
	}
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

