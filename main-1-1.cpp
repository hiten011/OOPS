#include<iostream>
#include <ctime>
#include"Vehicle.h"
#include"Car.h"
#include"Bus.h"
#include"Motorbike.h"
using namespace std;
int main()
{
    int c,b,m=0;
    cout<<"Enter the number of Cars \n";
    cin>>c;
    cout<<"Enter the number of Buses \n";
    cin>>b;
    cout<<"Enter the number of motorbikes \n";
    cin>>m;
    Car * cars[c];
    Bus * buses[b];
    Motorbike * motor[m];
     for (int i = 0; i < c; i++) {
        cars[i] = new Car(i + 1);
    }

    for (int j = 0; j < b; j++) {
        buses[j] = new Bus(j + 1);
    }

    for (int k = 0; k < m; k++) {
        motor[k] = new Motorbike(k + 1);
    }
    for (int i = 0; i < c; i++)
    {
        cout<<"Car "<<cars[i]->get_ID()<<" : "<<cars[i]->getParkingDuration()<<" seconds \n";
    }
    for (int j = 0; j < b; j++)
    {
        cout<<"Bus "<<buses[j]->get_ID()<<" : "<<buses[j]->getParkingDuration()<<" seconds \n";
    }
       for (int k = 0; k < m; k++)
    {
        cout<<"Motorbike "<<motor[k]->get_ID()<<" : "<<motor[k]->getParkingDuration()<<" seconds \n";
    }
    return 0;
}