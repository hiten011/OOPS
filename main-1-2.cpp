#include<iostream>
#include"ParkingLot.h"
#include"Vehicle.h"
#include"Car.h"
#include"Bus.h"
#include"Motorbike.h"
using namespace std;
int main()
{
    int id;
    ParkingLot P(10);
    for(int i=0;i<10;i++)
    {
    cout<<"Enter the type of Vehicle you want to park \n";
    int a;
    cin>>a;
    if (a==1)
    {
            Car * c= new Car(i);
            P.parkVehicle(c);
    }
    else if(a==2)
    {
           Bus * b =new Bus(i);
            P.parkVehicle(b);
        }
    else if (a==3)
    {
        Motorbike * m= new Motorbike(i);
        P.parkVehicle(m);
    }
    else{cout<<"Wrong entry \n";}
    }
    cout<<"Enter the id of vehicle you want to remove \n";
    cin>>id;
    P.unparkVehicle(id);  
    P.unparkVehicle(id); 
    P.unparkVehicle(id);
    return 0;
}