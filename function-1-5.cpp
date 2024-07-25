#include <iostream>

int count_evens(int number){

    if (number < 1){ // if the size is less than 1: return 0
        return 0;
    }
    
    int count = 0;

    for (int i = 1; i <= number; i++){ // counting the even numbers
        if (i % 2 == 0){
            count++;
        }
    }

    return count;
}