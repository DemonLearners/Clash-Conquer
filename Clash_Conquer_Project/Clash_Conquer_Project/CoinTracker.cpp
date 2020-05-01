#include "CoinTracker.h"

void CoinTracker::CheckUnlockables(string& name, int& power, bool& armor){
	if(!equipments.empty())
	{
		Equipment e = equipments.front();
		if(coinAmount >= e.coinAmount)
		{
			name = e.name;
			power = e.itemPower;
			armor = e.armor;
			cout << "you spend " << e.coinAmount << " on a " << name << endl;
			coinAmount-=e.coinAmount;
			cout << "You now only have " << coinAmount <<" coins"<< endl;
			equipments.erase(equipments.begin());
			
			cout << "Your now equiped with a " << name << " with a ";
			if (armor)
				cout << " defense of ";
			else 
				cout << " attack of ";
			cout << power << endl;
		}
	}
}
void CoinTracker::PickupCoins(int cointAmt, string& name, int& power, bool& armor)
{
	coinAmount += cointAmt;
	cout << "You now have " << coinAmount <<" coins\n";
	CheckUnlockables(name,power,armor);
}

