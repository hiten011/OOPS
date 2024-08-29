#include"Motorbike.h"
    Motorbike::Motorbike():Vehicle(){}
    Motorbike::Motorbike(int ID): Vehicle(ID){}
    int Motorbike::getParkingDuration()
    {
        int originalDuration = Vehicle::getParkingDuration();
        return originalDuration * 0.85;

    }
