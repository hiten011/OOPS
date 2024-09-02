#include "Vehicle.h"

Vehicle::Vehicle(): ID(0){
    this->timeOfEntry = time(nullptr);
}

Vehicle::Vehicle(int ID): ID(ID) {}

int Vehicle::get_ID() { return this->ID; }

std::time_t Vehicle::getDuration() {
    time_t current_time = time(nullptr);
    return (int) difftime(current_time, this->timeOfEntry);
 }
