#ifndef VEHICLE_H
#define VEHICLE_H

using namespace std;

#include <iostream>
#include <ctime>

class Vehicle{
    protected:
        std:: time_t timeOfEntry;
        int ID;

    public:
        Vehicle();
        Vehicle(int ID);
        int get_ID();
        std::time_t getDuration();
};

#endif