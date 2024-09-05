#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House{
    protected:
        Appliance ** Appliances;
        int numAppliances;

    public:
        House();
        House(int numAppliances);

        double getPowerConsumption();
};

#endif