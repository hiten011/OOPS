#include"Vehicle.h"
#include<ctime>
    Vehicle::Vehicle(): ID(0){}
    Vehicle::Vehicle(int ID): ID(ID){}
    int Vehicle::get_ID(){return ID;}
    int Vehicle::getParkingDuration()
    {
        time_t currentTime;
        currentTime = time(0);
        return (int)difftime(currentTime, timeOfEntry);
    }
    void Vehicle::set_ID(int id){ID=id;}
  time_t Vehicle::get_timeOfEntry(){return timeOfEntry;}