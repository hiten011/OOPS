#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>

using namespace std;

class Appliance{
    
    protected:
        int powerRating;
        bool isOn;

        public:
            Appliance();
            Appliance(int powerRating);
            void turnOn();
            void turnOff();
            int get_powerRating();
            void set_powerRating(int powerRating);
            virtual double getPowerConsumption();

};

#endif