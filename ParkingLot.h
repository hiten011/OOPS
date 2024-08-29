#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include"Vehicle.h"
class ParkingLot : public Vehicle
{
    private:
    int maxvehicles;
    int count;
    Vehicle * vcap = new Vehicle[maxvehicles];
    public:
    ParkingLot();
    ParkingLot(int v);
    int getCount();
    int countOverstayingVehicles(int maxParkingDuration);
    void parkVehicle(Vehicle * veh);
    void unparkVehicle(int id);
};
#endif