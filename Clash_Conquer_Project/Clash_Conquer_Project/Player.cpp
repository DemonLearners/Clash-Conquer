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

void Player::ChangeEquipment(string itemName,int value,bool armor)//need to have className::Method for the method to work
{
    if (armor=true)//to make it simplier you can have it as just if(armor) is the same as if(armor == true)
    {
        int defense=10;//need to be use the Player object varible defense not create a local variable defense and also make it
        //defense = value; 
        //need to set myInventory object armor name here
        //Inventory.setArmor(itemName);
    }
    else
    { 
        // increase the attack and change the weapons name
        //return Weapon();
    }
}


void Player::PickUpCoins(int coinAmt)//need to have className::Method for the method to work
{
    cout<<"You've picked up "<<coinAmt<<" coins!"<<endl;

    //coinTracker.PickupCoins(coinAmt, this); //yep that will work
}
