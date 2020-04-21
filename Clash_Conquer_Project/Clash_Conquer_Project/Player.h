#pragma once
#include <iostream>
#include "Inventory.h"


using namespace std;
class Player
{
public:
    int defense =0;
    bool dead = false;
    int attack= 0;
    int health =0; 
    Inventory myInventor;
    int Health();
    int Attack();
    void TakeDamage(int damage);
    void Death();
    void TakeMedKit();
    void DisplayPlayerStats();
    bool Alive();
    void UseMedKit();
    ///saved
};

