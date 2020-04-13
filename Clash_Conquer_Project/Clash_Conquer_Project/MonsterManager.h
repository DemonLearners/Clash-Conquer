#pragma once
#include <iostream>
#include <list>
#include <Monster>
#include <string>

namespace std
{
    class MonsterManager   
    {
        // Empty list of Monsters
        list<Monster> monsterList; 

        // Populate the monsterList
        void createMonsterList()
        {
            int min = 1;
            int max = 2;
            // Picks a random number from min to max
            int range = rand() % max + min;
            Monster monster;

            // create 'x' amount of monsters and add them to monster list
            for (int i = 0; i < range; i++)
            {
                // insert code to create or select monster
                monster = ...;
                // add monster to end of monsterList
                monsterList.push_back(monster)
            }
        }

        // Returns and removes the monster from the front of the monsterList
        Monster getNextMonster()
        {
            return monsterList.pop_front();
        }

        // Returns monster count of monsterList
        int getMonsterCount()
        {
            return monsterList.size();
        }
    };
}
