#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include "player.h"

using namespace std;

class Warrior:public Player{
    protected:
        string weapon;

    public:
        Warrior(string name, int health, int damage, string weapon);
        void swingWeapon(Player* opponent);
        string getWeapon();

};
#endif