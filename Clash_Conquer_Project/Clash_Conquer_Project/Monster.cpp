#pragma
#include "Monster.h"

Monster::Monster()
{
    int choice = rand() % 3 +1;
    switch (choice)
    {
    case 1:
        SetupMonster("skelton", 80, 5);
        break;
    case 2:
        SetupMonster("orc", 120, 15);
        break;
    case 3:
        SetupMonster("zombie", 30, 25);
        break;
    default:
        cout << "ran in error of setup up monster";
        break;
    }
}
void Monster::SetupMonster(string name, int health, int attack)
{
    this->name = name;
    this->health = health;
    this->attack = attack;
}
void Monster::Intro()
{
    cout << name << " with a health of " << health<<endl;
}
int Monster::Attack()
{
    return attack;
}
 
void Monster::TakeDamage(int amount)
{
    cout << name << " take " << amount << " damage from the player\n";
    health -= amount;
    if (health <= 0)
        Death();
}
int Monster:: RollForKit()
{
    
    int roll = rand() % 10;
    if (roll == 1)
    {
        cout << name << " drop a medikit\n";
        return 1;
    }
    return 0;
    
 }

int random(int min, int max)
//range : [min, max)
{
    if (first)
    {
        srand(time(NULL));
        //seeding for the first time only!
        first = false;
    }
    return min + rand() % ((max + 1) - min);
}
int Monster::DropCoins()
{
    int max = 5;
    int min = 0;
    int coins = random(min, max);

}

void Monster::Death()
{
    cout << "You have defeated the " << name << endl;
    dead = true;
}
 