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
 
    public: void Attack(Player player) {};
 
    public: void TakeDamage(int amount) {};
 
    public: void Death() {};
 
    };
 
}
