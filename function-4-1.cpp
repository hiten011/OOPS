#include <iostream>
#include <stdlib.h>

using namespace std;

int *readNumbers(){

    int* array = new int[10];

    for (int i = 0; i < 10; i++){

        // taking input
        cin >> array[i];
        
    }

    return array;
}

void printNumbers(int *numbers,int length){

    for (int i = 0; i < length; i++){

        cout << i << " " << numbers[i] << endl;
    }
}


int secondSmallestSum(int *numbers,int length){

    // creating the variables
    int sum;
    int small = numbers[0];
    int sec_small = numbers[1];

    // for loops to create and store all the possible subsets

    for (int i = 0; i < length; i++){

        sum = 0; // reseting sum to 0;

        for (int j = i; j < length; j++){

            // storing the sum in array
            sum += numbers[j];

            // skiping the the first most loop
            if (i == 0 && j == 0){
                continue;
            }

            // finding the second smallest
            if (sum <= small){
                sec_small = small;
                small = sum;
            }
            else if(sum < sec_small){
                sec_small = sum;
            }
        }
    }

    return sec_small;
}