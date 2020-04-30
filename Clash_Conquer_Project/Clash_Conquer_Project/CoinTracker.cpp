#include "CoinTracker.h"

void CheckUnlockables(Player* pPlayer){
	if(!pPlayer->coinTracker->equipments.empty()){
		if(pPlayer->coinTracker->coinAmount >= pPlayer->coinTracker->equipments[0].coinAmount){
				pPlayer->ChangeEquipment(pPlayer->coinTracker->equipments[0].name,pPlayer->coinTracker->equipments[0].coinAmount,
			pPlayer->coinTracker->equipments[0].armor);
			pPlayer->coinTracker->coinAmount-=pPlayer->coinTracker->equipments[0].coinAmount;
			pPlayer->coinTracker->equipments.erase(pPlayer->coinTracker->equipments.begin());
		}
	}
}

