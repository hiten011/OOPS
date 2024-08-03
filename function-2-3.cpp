#include <iostream>
#include <cmath>

bool is_palindrome(int array[], int length) {

    if (length < 1) {
        return false; // Return false if n is less than 1
    }   

    int mid = length / 2;
    int index = length - 1;

    for (int i = 0; i < mid + 1; i++){

        if (array[i] != array[index]){
            return false;
        }

        index--;
    }

    return true;
}

int sum_array_elements(int integers[], int length){
    int sum = 0;

    for(int i = 0; i < length; i++){
        sum += integers[i];
    }

    return sum;
}

int sum_if_palindrome(int integers[], int length) {

    if (is_palindrome(integers, length)) {
        return sum_array_elements(integers, length);
    } 
    else {
        return -2; // Not a palindrome
    }
}