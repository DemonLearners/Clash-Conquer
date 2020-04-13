#include "Player.h"

int Player::Health()
{
    /*health+=medkit(10);
    myInventory.subtract_medkit(10);*/
    cout << "Your current health is: " << health << endl;
    return health;
}

int Player::Attack()
{
    return attack;
}

void Player::TakeDamage(int damage)
{
    health -= damage;
    if ((health == 0) || (health < 0))
    {
        Death();
    }
    else
    {
        cout << "You've taken some damage!" << "\t" << endl;
        cout << "Your current health is: " << health << "\t" << endl;

    }
}

    void Player::Death()
    {
        dead = true;
    }


    void Player::TakeMedKit()
    {
        //health += medkit(10);
       // myInventory.subtract_medkit(10);

    }


    void Player::DisplayPlayerStats()
    {
        cout << "Your current health is: " << health << endl;
    }
