//INVENTORY CLASS

#include<iostream>
using namespace std;

class Inventory
{
    private:
    string weapon ="A pencil of justice";
    string armor="T-shirt";
    int medkit=5;

    public:
    int MedKitAmount();
    int subtract_medkit();

    void add_medkit();


    string Weapon();

    string Armor();

    void SetArmorName(string name);
    void SetWeaponName(string name);
};


