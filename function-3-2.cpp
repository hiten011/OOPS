#include <iostream>
#include <stdlib.h>
#include <cmath>

int median_array(int array[], int n){

    if (n < 1){
        return 0;
    }

    int min; // store the minimum index value
    int min_value = 0; // store the minmum value 
     
    // sorting
    for(int i = 0; i < n; i++){

        min = i; // intial compare

        for (int j = (i + 1); j < n; j++){

            if (array[min] > array[j]){
                min = j;
            }
        }

        // swapping two value
        min_value = array[min];
        array[min] = array[i];
        array[i] = min_value;
    }

    // finding median and returning it
    return array[n / 2];
}