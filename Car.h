#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car{
    protected:
        int price;
        int emissions;

    public:
        Car();
        Car(int price);

        int get_price();
        int set_price(int price);

        int get_emissions();
        int set_emissions(int emissions);

        virtual void drive(int kms);

};

#endif