#include <iostream>
#include <cmath>

bool is_fanarray(int array[], int n){

    if (n < 1){
        return false;
    }

    int mid = n / 2; // finding the middle value

    for (int i = 0; i < mid ; i++){

        // ascending (left to right)
        if (array[i] > array[i + 1]){
            return false;
        }

        // descending (right to left)
        if (array[n] < array[n - 1]){
            return false;
        }
    }

    return true;


}