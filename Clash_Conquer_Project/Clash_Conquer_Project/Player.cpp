#include "Player.h"

int Player::Health()
{
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
        cout<<"Oh no you killed me!"<<endl;
        dead=true;
    }


    void Player::TakeMedKit()
    {
      
       myInventory.add_medkit();

    }
    void  Player::UseMedKit()
    {

        health += myInventory.subtract_medkit();
        if (health >100)
        {
            health=100;
        }

    }

    void Player::DisplayPlayerStats()
    {
        cout << "Your current health is: " << health << endl;
        cout << "Your current weapon is: " << myInventory.Weapon() << endl;
        cout << "Your current armor is: " << myInventory.Armor() << endl;
    }


bool Player:: Alive()
{
    if (!dead)
    {
        return true;
    }
    else
    {
        return false;
    }
}



