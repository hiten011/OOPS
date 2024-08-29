#ifndef VEHICLE_H   
#define VEHICLE_H
#include<iostream>
#include<ctime>
class Vehicle
{
protected:
    time_t timeOfEntry=time(0);
    int ID;
public:
    Vehicle();
    Vehicle(int ID);
    int get_ID();
    virtual int getParkingDuration();
    void set_ID(int id);
    time_t get_timeOfEntry();
};
#endif