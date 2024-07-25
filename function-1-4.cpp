#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n){

    if (n < 1){ // if the size of array is less than 1: return 0 
        return 0;
    }
    
    int total = 0;

    for (int i = 0; i < n; i++){ // adding the numbers in array
        total = array[i] + secondarray[i] + total;
    }

    return total;
}