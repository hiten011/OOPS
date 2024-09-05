#ifndef TESLA_H
#define TESLA_H

#include <iostream>
#include "Car.h"

using namespace std;

class Tesla: public Car{
    protected:
        char model;
        float batteryPercentage;


    public:
        Tesla();
        Tesla(char model, int price);

        int get_model();
        int set_model(char model);

        int get_batteryPercentage();
        int set_batteryPercentage(float batteryPercentage);

        void chargeBattery(int mins);
        void drive(int kms);


};

#endif