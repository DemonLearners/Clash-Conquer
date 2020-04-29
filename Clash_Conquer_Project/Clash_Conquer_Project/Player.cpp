#include "Player.h"

int Player::Health()
{
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
      
       myInventor.add_medkit();

    }
    void  Player::UseMedKit()
    {

        health += myInventor.subtract_medkit();
        if (health >100)
        {
            health=100;
        }

    }

    void Player::DisplayPlayerStats()
    {
        cout << "Your current health is: " << health << endl;
        cout << "Your current weapon is: " << myInventor.Weapon() << endl;
        cout << "Your current armor is: " << myInventor.Armor() << endl;
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

void ChangeEquipment(string itemName,int value,bool armor)
{
    if (armor=true)
    {
        int defense=10;
        Inventory.setArmor(itemName);
    }
    else
    {
        return Weapon();
    }
}


void PickUpCoins(int coinAmt)
{
    cout<<"You've picked up "<<coinAmt<<" coins!"<<endl;

    //coinTracker.PickUpCoins(coinAmt,this)??
}

/*
inventory

*/