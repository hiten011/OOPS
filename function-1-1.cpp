#include <iostream>

int array_sum(int array[], int n){

    if (n < 1){ // if the size of array is less than 1: return 0 
        return 0;
    }
    
    int total = 0;

    for (int i = 0; i < n; i++){ // adding the numbers in array
        total += array[i];
    }

    return total;
}