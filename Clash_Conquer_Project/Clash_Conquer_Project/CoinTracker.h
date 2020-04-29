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
	vector<Equipment> equipments{ {"leather armor",100,20,false} };
	void CheckUnlockables(Player* pPlayer);
public:
	void PickupCoins(int coinAmt, Player* pPlayer);


};

