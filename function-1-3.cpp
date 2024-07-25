#include <iostream>

int num_count(int array[], int n, int number){

    if (n < 1){ // if the size of array is less than 1: return 0
        return 0;
    }
    
    int count = 0;

    for (int i = 0; i < n; i++){ // counting the numbers of array
        if (array[i] == number){
            count++;
        }
    }

    return count;
}