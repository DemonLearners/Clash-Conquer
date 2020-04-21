//INVENTORY CLASS

#include<iostream>
using namespace std;

class Inventory
{
    private:
    string weapon ="";
    string armor="";
    int medkit=5;

    public:

    int subtract_medkit();

    void add_medkit();


    string Weapon();

    string Armor();
};


