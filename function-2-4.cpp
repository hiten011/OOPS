#include <iostream>

int array_min(int integers[], int length){

    if (length < 1) {
        return 0;
    }
    
    // Initialising minimum
    int minimum = integers[0];
    
    for(int i = 0; i < length; i++){
        if(integers[i] < minimum){
            minimum = integers[i];
        }
    }
    
    return minimum;
}

int array_max(int integers[], int length){

    if (length < 1) {
        return 0;
    }
       
    // Defining maximum
    int maximum = integers[0];
    
    for(int i = 0; i < length; i++){
        if(integers[i] > maximum){
            maximum = integers[i];
        }
    }
    
    return maximum;
}

int sum_min_max(int integers[], int length){

    int sum = 0; // Intialising sum

    int minimum = array_min(integers, length); // Finding minimum in the array   
    int maximum = array_max(integers, length); // Finding maximum in the array

    sum = minimum + maximum;

    return sum;
}