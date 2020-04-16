//INVENTORY CLASS
#ifndef INVENTORY_H
#define INVENTORY_h

#include<iostream>
#include<vector>

using namespace std;

class Inventory
{
    public:
    //vector<string> arsenal(1);
    vector<int>medkit;
    string weapon;
    void print_weapon();

    subtract_medkit()
    {
        medkit-=10;
        cout<<"Your current medkit has : "<<medkit<<endl;
    }

    add_medkit()
    {
        medkit+=10;
        cout<<"Your current medkit has : "<<medkit<<endl;
    }
}

#endif
