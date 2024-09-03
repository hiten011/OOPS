#include "Appliance.h"

Appliance::Appliance(): isOn(false) {
    Appliance(0);
};

Appliance::Appliance(int powerRating): powerRating(powerRating) {};

void Appliance::turnOn(){
    this->isOn = true;
};

void Appliance::turnOff(){
    this->isOn = false;
};

int Appliance::get_powerRating() { return this->powerRating; };

void Appliance::set_powerRating(int powerRating) {
    this->powerRating = powerRating;
}

double Appliance::getPowerConsumption() { return 0.0; };
