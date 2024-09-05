#include "Ford.h"

Ford::Ford():Car(0), badgeNumber(0), litresOfFuel(60) {}

Ford::Ford(int badgeNumber, int price): Car(price), badgeNumber(badgeNumber), litresOfFuel(60) {}

int Ford::get_badgeNumber() { return badgeNumber; }

int Ford::set_badgeNumber(char model) { this->badgeNumber = badgeNumber; }

float Ford::get_litresOfFuel() { return litresOfFuel; }

float Ford::set_litresOfFuel(float litresOfFuel) { this->litresOfFuel = litresOfFuel; }

void Ford::refuel(int litres) {
    if (litresOfFuel + litres >= 60){
        litresOfFuel = 60;
    }
    else{
        litresOfFuel += litres;
    }
   
}

void Ford::drive(int kms) {
    for (int i = 0; i < kms; i++){
        
        if (litresOfFuel <= 0.1){
            break;
        }

        litresOfFuel = litresOfFuel - 0.2;

        emissions = emissions + 234;

    }
}
