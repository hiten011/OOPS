#include <iostream>

double array_mean(int array[], int n){

    if (n < 1){ // if the size of array is less than 1: return 0.0 
        return 0.0;
    }
    
    int total = 0;

    for (int i = 0; i < n; i++){ // adding the numbers in array
        total += array[i];
    }

    return double(total / n);
}