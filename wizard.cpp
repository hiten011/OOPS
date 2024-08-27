#include "wizard.h"

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name, health, damage) {
    this->mana = mana;
}

void Wizard::castSpell(Player* opponent) {
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
    attack(opponent, mana);
}

int Wizard::getMana() { return mana; };
