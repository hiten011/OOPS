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

int find_small(int * array, int len){

    int small = array[0];
    int sec_small = array[1];

    for (int i = 1; i < len; i++){
        
        if (array[i] <= small){

            sec_small = small;
            small = array[i];
        }
        else if(array[i] < sec_small){
            sec_small = array[i];
        }
    }

    return sec_small;
}

int secondSmallestSum(int *numbers,int length){

    // calculating length of possible sub sets
    int len = 0.5 * length * (length + 1);

    // creating the array to store all the possible subsets
    int array[len];
    int sum;
    int index = 0;

    // for loops to create and store all the possible subsets

    for (int i = 0; i < length; i++){

        sum = 0; // reseting sum to 0;

        for (int j = i; j < length; j++){

            // storing the sum in array
            sum += numbers[j];

            // putting the sum in array
            array[index] = sum;
            index++; //appending the index
        }
    }

    return find_small(array, len);
}