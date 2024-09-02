#include "Car.h"

Car::Car(): Vehicle() {}

Car::Car(int ID): Vehicle(ID) {}

int Car::getParkingDuration() {
    int duration = Vehicle:: getDuration();
    return duration * 0.9;
}
