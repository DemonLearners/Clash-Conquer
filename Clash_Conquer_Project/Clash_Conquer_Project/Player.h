#pragma once
#include <iostream>
#include "Inventory.h"


using namespace std;
class Player
{
public:
    int defense =0;
    bool dead = false;
    int attack= 25;
    int health =100; 
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

