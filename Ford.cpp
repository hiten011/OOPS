#include "Ford.h"

Ford::Ford():Car(0), badgeNumber(0), litresOfFuel(60) {}

Ford::Ford(int badgeNumber, int price): Car(price), badgeNumber(badgeNumber), litresOfFuel(60) {}

int Ford::get_badgeNumber() { return badgeNumber; }

int Ford::set_badgeNumber(char model) { this->badgeNumber = badgeNumber; }

float Ford::get_litresOfFuel() { return litresOfFuel; }

float Ford::set_litresOfFuel(float litresOfFuel) { this->litresOfFuel = litresOfFuel; }

void Ford::refuel(int litres) {
    if (litresOfFuel + litres <= 60){
        litresOfFuel += litres;
    }
}

void Ford::drive(int kms) {}
