#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int choice;
    int mhp, hp, i, init, atk, def, rit, damage, mdamage;
    atk = 10;
    def = 15;
    int currentMonsterCount = 1;
    int totalMonsterCount = 3;
    int medkitDrop;
    int totalMedkits = 0;

    srand(unsigned(time(0)));
    init = rand() % 2 + 1;
    mhp = rand() % 50 + 60;
    hp = rand() % 20 + 80;
    if (init == 1) {
        cout << "You can start!\n";
    }
    while (currentMonsterCount <= totalMonsterCount)

    {
  
            if (hp < 1) {
                cout << "You died! The beast still has " << mhp << " HP left, you suck!\n";
                cin.get();
                return 0;
            }
            else {
                cout << "You can start!\n";
                cout << "Monsters: " << currentMonsterCount << " / " << totalMonsterCount << "\n";

                mhp = rand() % 50 + 60;

                while (hp > 0 && mhp > 0) 
                {
                    cout << "\nWhat do you want to do?\n 1 -> Fierce Attack \n 2 -> Coward's Retreat\n 3 -> Use Medkit.";
                    cout << " You have " << totalMedkits << " medkits left.\n";

                    do { cin >> choice; } while (choice > 3 || choice < 1);
                    switch (choice) {
                    case 1:
                        atk = rand() % 20 + 10;
                        def = rand() % 10 + 10;
                        break;
                    case 2:
                        cout << "You decided to retreat, you coward!\n";

                        return 0;
                    case 3:
                        if (totalMedkits > 0) {
                            hp = 100;
                            totalMedkits -= 1;
                            cout << "You have used a medkit. You now have full health!";
                        }

                        else {
                            cout << "You do not have any medkits";
                        }

                        break;
                    }
                    choice = rand() % 3;

                    switch (choice) {
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    }
                    mdamage = (atk)-(def / atk);
                    if (mdamage < 0) {
                        mdamage = 0;
                    }
                    mhp = mhp - mdamage;
                    cout << "You did " << mdamage << " damage to the monster!\n";


                    damage = (atk)-(def / atk);
                    


                    if (mhp < 1) {
                        cout << "You killed the monster! How dare you kill something!\n";
                        currentMonsterCount += 1;


                        medkitDrop = rand() % 2 + 1;
                        if (medkitDrop == 1)
                        {
                            totalMedkits += 1;
                            cout << "Medkit found! Current medkit count: " << totalMedkits << "\n";
                        }


                   
                    }


                    else if (damage < 0)
                    {
                        damage = 0;
                    }

                    if (mhp > 0) {
                        cout << "The monster now has " << mhp << " HP left.\n";

                        hp = hp - damage;

                        cout << "The monster stole " << damage << " points from you. You still have, " << hp << " HP points availalble\n";
                    }

                }
            }
        }
    }
