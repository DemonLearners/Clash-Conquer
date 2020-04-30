#include "Inventory.h"

int Inventory::subtract_medkit()
{
    medkit -= 1;
    cout << "Your current medkit has : " << medkit << endl;
    return 50; //medkit health value that returns to the user
}

void Inventory::add_medkit()
{
    medkit += 1;
    cout << "Your current medkit has : " << medkit << endl;
}


string Inventory::Weapon()
{
    return weapon;
}

string Inventory::Armor()
{
    return armor;
}
int Inventory::MedKitAmount()
{
    return medkit;
}

void Inventory::SetArmorName(string name)
{
    armor=name;
}

void Inventory::SetWeaponName(string name)
{
    weapon=name;
}