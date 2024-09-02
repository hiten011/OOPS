#include "Vehicle.h"
#include "Motorbike.h"
#include "Bus.h"
#include "Car.h"
#include <ctype.h>

using namespace std;

int main(){
    // taking input from user
    int total_vehicle = 0;
    cout << "Number of vehicle: ";
    cin >> total_vehicle;
    
    // creating array to store the vehicles pointer
    Vehicle ** vehicle_array = new Vehicle*[total_vehicle];

    string type = "None";

    // looping and asking for type of Vehicle
    for (int i = 0; i < total_vehicle; i++){

        // asking user the vehicle type
        cout << "Type: ";
        cin >> type;

        if (type == "Car"){
            vehicle_array[i] = new Car[1];
        }
        else if (type == "Bus"){
            vehicle_array[i] = new Bus[1];
        }
        else if (type == "Motorbike"){
            vehicle_array[i] = new Motorbike[1];
        }
        else{
            vehicle_array[i] = nullptr;
        }
    }

    for (int j = 0; j < total_vehicle; j++){
        cout << vehicle_array[j]->getDuration() << endl;
    }

}