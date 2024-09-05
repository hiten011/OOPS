#include "House.h"

House::House() {House(0);};

House::House(int numAppliances): numAppliances(numAppliances) {
    Appliances = new Appliance*[numAppliances];
}


