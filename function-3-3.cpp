#include <iostream>

double weighted_average(int array[], int n){

    if (n < 1){
        return 0;
    }

    double count = 0;
    double weighted_avg = 0.0;

    for (int i = 0; i < n; i++){

        count = 0;

        for (int j = 0; j < n; j++){

            if (array[i] == array[j]){
                count++;
            } 
        } // counting the numbers array[i] appering in array

        weighted_avg += (double) (array[i] * (count / n));


    }

    return weighted_avg;
}