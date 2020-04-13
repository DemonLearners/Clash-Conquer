#pragma once
#include <iostream>
using namespace std;
class Player
{
public:
    int defense;
    bool dead;
    int attack;
    int health; 
    int health();
    int attack();
    void takeDamage(int damage);
    void Death();
    void TakeMedKit();
    void DisplayPlayerStats();

};

