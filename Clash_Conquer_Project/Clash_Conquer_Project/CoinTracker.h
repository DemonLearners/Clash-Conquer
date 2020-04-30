#pragma once
#include <vector>
#include <string>
#include "Player.h"
using namespace std;
class CoinTracker
{
private:
	struct Equipment
	{
		string name;
		int coinAmount;
		int itemPower;
		bool armor;
	};
	int coinAmount;
	//intialzie the values here
	vector<Equipment> equipments{ {"leather armor",100,5,true}, {"leather sword",125,30,false}, {"iron armor",300,15,true}, {"iron sword",350,60,false} };
	void CheckUnlockables(Player* pPlayer);
public:
	void PickupCoins(int coinAmt, Player* pPlayer);


};

