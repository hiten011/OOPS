#include "Motorbike.h"

Motorbike::Motorbike(): Vehicle() {}

Motorbike::Motorbike(int ID): Vehicle(ID) {}

int Motorbike::getParkingDuration() {
    int duration = Vehicle:: getDuration();
    return duration * 0.9;
}
