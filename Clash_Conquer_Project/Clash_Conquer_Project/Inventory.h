//INVENTORY CLASS
#include "Player.h"

#include<iostream>
using namespace std;

class Inventory
{
    private:
    string weapon;
    string armor;
    int medkit=5;

    public:

    int subtract_medkit()
    {
        medkit-=1;
        cout<<"Your current medkit has : "<<medkit<<endl;
        return 25; //medkit health value that returns to the user
    }

    void add_medkit()
    {
        medkit+=1;
        cout<<"Your current medkit has : "<<medkit<<endl;
    }


    string Weapon()
    {
        return weapon;
    }

    string Armor()
    {
        return armor;
    }

    void SetArmor(int value)
    {
        return Armor();
    }

    void SetWeapon(string weapon)
    {
        return Weapon();
    }
};


