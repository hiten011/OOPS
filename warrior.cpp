#include "warrior.h"

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage){
    this->weapon = weapon;
}

void Warrior::swingWeapon(Player* opponent) {
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    attack(opponent, damage);
}

string Warrior::getWeapon() { return weapon; }
