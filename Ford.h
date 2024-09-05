#ifndef FORD_H
#define FORD_H

#include <iostream>
#include "Car.h"

using namespace std;

class Ford: public Car{
    protected:
        int badgeNumber;
        float litresOfFuel;


    public:
        Ford();
        Ford(char model, int price);

        int get_model();
        int set_model(char model);

        int get_batteryPercentage();
        int set_batteryPercentage(int batteryPercentage);

        void chargeBattery(int mins);
        void drive(int kms);


};

#endif