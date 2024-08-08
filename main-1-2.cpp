#include <iostream>

extern void modifyArray(double *array, int size, double value);

using namespace std;

int main(){

    double array[15];

    modifyArray(array, 15, 5);

    for (int i = 0; i < 15; i++){
        cout << array[i] << endl;
    }
}