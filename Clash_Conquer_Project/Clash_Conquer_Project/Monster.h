#pragma

#include <iostream>
using namespace std;
    class Monster
    {
    private:
        string  name ="rob";
        int     health =1;
        int     attack=1;
      
 
    public: 
        bool dead = false;
        Monster();
        void SetupMonster(string name, int health, int attack);
        void Intro();
        int Attack();
         void TakeDamage(int amount);
         int RollForKit();
         void Death();
 
    };