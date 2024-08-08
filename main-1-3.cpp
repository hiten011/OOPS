#include <iostream>

extern double* duplicateArray(double* array, int size);

using namespace std;

int main(){

    double array[5] = {1, 2, 3, 4, 5};

    double * new_array = duplicateArray(array, 5);
     
    for (int i = 0; i < 5; i++){
        cout << new_array[i] << endl;
    } 
}