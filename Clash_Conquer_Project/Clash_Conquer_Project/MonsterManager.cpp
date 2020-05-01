#include "MonsterManager.h"
MonsterManager::MonsterManager(int amount)
{
    createMonsterList(amount);
}
// Populate the monsterList
void MonsterManager::createMonsterList(int range)
{  
    size = range;
    // create 'x' amount of monsters and add them to monster list
    for (int i = 0; i < range; i++)
    {   
        // add monster to end of monsterList
        monsterList.push_back(Monster());
    }
}

char MonsterManager::Battle(Player* pPlayer)
{
    system("pause");
    system("cls");
    while (!Cleared())
    {
        
        cout << "\nMonsters " << defeated + 1 << " / " << size << endl;
        Monster m = monsterList.front();
        m.Intro();
        pPlayer->DisplayPlayerStats();

        while (!m.dead)
        {
            int choice = 0;
            cout << "please enter 1 to attack";
            if (pPlayer->myInventory.MedKitAmount() > 0)
               cout << " or press 2 for medkits you have " << pPlayer->myInventory.MedKitAmount();
            cout << endl;
            
            cin >> choice;
         
                if (choice == 1)
                {
                    m.TakeDamage(pPlayer->Attack());
                    if (!m.dead)
                    {
                        m.Intro();
                        pPlayer->TakeDamage(m.Attack());
                        if (!pPlayer->Alive())
                            return 'l';
                    }
                    else//monster was defeated
                    {
                        defeated++;
                        pPlayer->PickUpCoins(m.DropCoins());//just made minor fixes
                        // roll for a medkit 
                        if (m.RollForKit() >0)
                        pPlayer->TakeMedKit();
                        monsterList.erase(monsterList.begin());
                    }
                }
                else if (choice == 2)
                {
                    pPlayer->UseMedKit();
                    cout <<"Health is now " << pPlayer->Health()<<endl;
                }
                  
                else
                    cout << "Sorry the choice you picked does not exist\n";
            
          
        }
    }
    return 'w';
}
bool MonsterManager::Cleared()
{
    return monsterList.empty();
}
