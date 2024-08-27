#include "player.h"

Player::Player(string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Player::attack(Player* opponent, int damage) {
    opponent->takeDamage(damage);
}

void Player::takeDamage(int damage) {
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
    this->health = this->health - damage; // reduces the health
}

int Player::getHealth() { return health; }

int Player::getDamage() { return damage; }

string Player::getName() { return name; }
