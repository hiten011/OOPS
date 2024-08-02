#include <iostream>
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits){

    int sum = 0;
    int index = 0;

    for (int i = number_of_digits - 1; i > -1 ; i--){
        sum += (binary_digits[index] * (pow(2,i)));
        
    }

    return sum;
}