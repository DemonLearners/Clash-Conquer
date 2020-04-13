#include "Player.h"

int health()
{
    /*health+=medkit(10);
    myInventory.subtract_medkit(10);*/
    cout << "Your current health is: " << health << endl;
}

int attack()
{
    ///////
}

void takeDamage(int damage)
{
    health -= damage;
    if ((health == 0) || (health < 0))
    {
        Death()
    }
    else
    {
        cout << "You've taken some damage!" << "\t" << endl;
        cout << "Your current health is: " << health << "\t" << endl;

    }

    void Death()
    {
        dead = true;
    }


    void TakeMedKit()
    {
        health += medkit(10);
        myInventory.subtract_medkit(10);

    }


    void DisplayPlayerStats()
    {
        cout << "Your current health is: " << health << endl;
    }
