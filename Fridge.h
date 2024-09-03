#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge: public Appliance{
    protected:
        double volume;

    public:
        Fridge();
        Fridge(int powerrating, double volume);
        
        void setVolume(double volume);
        double getVolume();

        double getPowerConsumption();
};

#endif