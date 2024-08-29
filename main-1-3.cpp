#include <iostream>
#include<ctime>
#include "ParkingLot.h"
#include"Vehicle.h"
#include"Car.h"
#include"Bus.h"
#include"Motorbike.h"
int main() {
    ParkingLot parkinglot(10);
    int id;

    for (int i = 0; i < 5; i++) {
        id = i + 1;
        Car* car = new Car(id);
        parkinglot.parkVehicle(car);
    }
    for (int i = 0; i < 3; i++) {
        id = i + 6;
        Bus* bus = new Bus(id);
        parkinglot.parkVehicle(bus);
    }
    for (int i = 0; i < 2; i++) {
        id = i + 9;
        Motorbike* motorbike = new Motorbike(id);
        parkinglot.parkVehicle(motorbike);
    }

    int overstayingCount = parkinglot.countOverstayingVehicles(15);
    std::cout << "Number of vehicles overstaying: " << overstayingCount << "\n";
    return 0;
}