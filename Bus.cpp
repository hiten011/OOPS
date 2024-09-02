#include "Bus.h"

Bus::Bus(): Vehicle() {}

Bus::Bus(int ID): Vehicle(ID) {}

int Bus::getParkingDuration() {
    int duration = Vehicle:: getDuration();
    return duration * 0.75;
}
