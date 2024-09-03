#include "TV.h"

TV::TV() {
    TV(0, 0.0);
};

TV::TV(int powerRating, double screenSize): Appliance(powerRating), screenSize(screenSize) {}

void TV::setScreenSize(double screenSize) {this->screenSize = screenSize;};
double TV::getScreenSize() { return this->screenSize; };

double TV::getPowerConsumption() { 
    return (powerRating * (screenSize / 10));
 };
