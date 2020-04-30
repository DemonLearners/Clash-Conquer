#pragma

#include <iostream>
using namespace std;
    class Monster
    {
    private:
        string  name ="rob";
        int     health =1;
        int     attack=1;
        bool first = false;//need to declare this value if your going to be using it in your random method
      
 
    public: 
        bool dead = false;
        Monster();
        void SetupMonster(string name, int health, int attack);
        void Intro();
        int Attack();
         void TakeDamage(int amount);
         int RollForKit();
         void Death();
         int DropCoins();//need to add method to your header if your going to be using it
         int Random(int min, int max);//need to declare this method if your going to be using it
 
    };
