#include "Tesla.h"

Tesla::Tesla(): model(0), Car(0), batteryPercentage(100.0) {};
Tesla::Tesla(char model, int price): model(model), Car(price), batteryPercentage(100.0) {}

int Tesla::get_model() { return this->model; }
int Tesla::set_model(char model) { this->model = model; }

float Tesla::get_batteryPercentage() { return this->batteryPercentage; }
float Tesla::set_batteryPercentage(float batteryPercentage) { 

    if (batteryPercentage < 0){
        this->batteryPercentage = 0;
    } 
    else if(batteryPercentage > 100){
        this->batteryPercentage = 100;
    } 
    else{
        this->batteryPercentage = batteryPercentage;
    }
}

void Tesla::chargeBattery(int mins) {

    for (int i = 0; i < mins; i++){

        if (batteryPercentage >= 100){
            break;
        }

        batteryPercentage = batteryPercentage + 0.5;
    }
}

void Tesla::drive(int kms) {
    for (int i = 0; i < kms; i++){

        if (batteryPercentage <= 0.1){
            break;
        } 

        batteryPercentage = batteryPercentage - 0.2;

        emissions += 74;
    }
};