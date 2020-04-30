#pragma once
#include <iostream>
#include "Inventory.h"
#include "CoinTracker.h"
//need to include the CoinTracker.h 
using namespace std;
class Player
{
public:
    int defense =0;
    bool dead = false;
    int attack= 25;
    int health =100; 
    Inventory myInventory;
    int Health();
    int Attack();
    void TakeDamage(int damage);
    void Death();
    void TakeMedKit();
    void DisplayPlayerStats();
    bool Alive();
    void UseMedKit();
    //re add the changes you made
    void ChangeEquipment(string itemName, int value, bool armor);
    void PickUpCoins(int coinAmount);
    CoinTracker coinTracker;//need to have the include to be able to use this
};

