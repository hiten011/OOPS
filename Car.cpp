#include"Car.h"
Car::Car():Vehicle(){}
Car::Car(int ID): Vehicle(ID){}
int Car::getParkingDuration()
{
    int originalDuration = Vehicle::getParkingDuration();
    return originalDuration * 0.9;
}