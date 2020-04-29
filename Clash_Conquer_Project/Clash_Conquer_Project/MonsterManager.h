#pragma once
#include <iostream>
#include <list>
#include "Monster.h"
#include <string>
#include "Player.h"

    class MonsterManager   
    {
    private:
        // Empty list of Monsters
        list<Monster> monsterList;
        int size= 0;
        int defeated=0;
        // Populate the monsterList
        void createMonsterList(int range);
   
    public:
        MonsterManager(int amount);
        //battleMode
        char Battle(Player *pPlayer);
        //check to see if there is monsters
        bool Cleared();
    };
