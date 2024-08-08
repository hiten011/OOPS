#include <iostream>

extern void modifyArray(double *array, int size, double value);

using namespace std;

int main(){

    double array[15];

    modifyArray(array, 15, 5);
}