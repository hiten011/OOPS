#include "Car.h"

Car::Car() {};

Car::Car(int price): price(price), emissions(0) {};

int Car::get_price() { return price; }
int Car::set_price(int price) { this->price = price; }

int Car::get_emissions() { return emissions; }
int Car::set_emissions(int emissions) { this->emissions = emissions; }

void Car::drive(int kms) {
    this->emissions = 20 * kms;
};
