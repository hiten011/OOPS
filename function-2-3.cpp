#include <iostream>


#include <iostream>
#include <cmath>

bool is_palindrome(int array[], int length) {
    if (length < 1) {
        return false; // Return false if n is less than 1
    }

    int mid_point = ceil(length/2.0);

    // Check for palindrome property
    for (int i = 0; i < mid_point; i++) {
        if (array[i] != array[length - 1 - i]) {
            return false; // If not equal, not a palindrome
        }
    }
    return true;   
}

int sum_array_elements(int integers[], int length){
    int sum = 0;

    for(int i = 0; i < length; i++){
        sum = sum + integers[i];
    }

    return sum;
}

int sum_if_palindrome(int integers[], int length) {
    if (is_palindrome(integers, length)) {
        return sum_array_elements(integers, length);
    } else {
        return -2; // Not a palindrome
    }
}