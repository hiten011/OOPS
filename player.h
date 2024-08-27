#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

using namespace std;

class Player{

    protected:
        string name;
        int health;
        int damage;

    public:
        Player(string name, int health, int damage);
        void attack(Player* opponent, int damage);
        void takeDamage(int damage);
        int getHealth();
        int getDamage();
        string getName();

};

#endif