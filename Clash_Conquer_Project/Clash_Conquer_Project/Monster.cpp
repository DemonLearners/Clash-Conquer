#pragma
#include <string>
#include "player.h"
 
namespace std
{
    class Monster
    {
        string  name;
        int     health;
        int     attack;
        bool    dead;
 
        public: void Attack(Player player)
        {
            player.TakeDamage(attack);
        }
 
        public: void TakeDamage(int amount)
        {
            health -= amount;
        }
 
        public: void Death()
        {
            dead = true;
        }
    };
 
}
