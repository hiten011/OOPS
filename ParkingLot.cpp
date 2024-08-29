#include "ParkingLot.h"

ParkingLot::ParkingLot(int v) : maxvehicles(v), count(0){}
void ParkingLot::parkVehicle(Vehicle* veh) {
    if (count == maxvehicles) {
        std::cout << "The lot is full\n";
        return;
    }

    vcap[count++].set_ID(veh->get_ID());
}

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < count; i++) {
        if (vcap[i].get_ID() == id) {
            vcap[i].set_ID(-1);
            count--;
            return;
        }
    }
    std::cout << "Vehicle not in the lot\n";
}

int ParkingLot::getCount() {
    return count;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int overstayingCount = 0;
    time_t currentTime = time(0);
    for (int i = 0; i < count; i++) {
        int parkingDuration = vcap[i].getParkingDuration();
if (parkingDuration > maxParkingDuration) {
            overstayingCount++;
        }
    }

    return overstayingCount;
}