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
        Ford(int badgeNumber, int price);

        int get_badgeNumber();
        int set_badgeNumber(char model);

        float get_litresOfFuel();
        float set_litresOfFuel(float litresOfFuel);

        void refuel(int litres);
        void drive(int kms);


};

#endif