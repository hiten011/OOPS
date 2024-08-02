#include <iostream>

extern int sum_diagonal(int array[4][4]);


int main(void) {

    int array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,5}};

    int sum = sum_diagonal(array);

    std:: cout << sum;



}