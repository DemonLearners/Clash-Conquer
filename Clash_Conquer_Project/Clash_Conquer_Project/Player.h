#pragma once
#include <iostream>
using namespace std;
class Player
{
public:
    int defense =0;
    bool dead = false;
    int attack= 0;
    int health =0; 
    int Health();
    int Attack();
    void TakeDamage(int damage);
    void Death();
    void TakeMedKit();
    void DisplayPlayerStats();

};

