#include <iostream>

extern double weighted_average(int array[], int n);

int main(){

    int number[] = {1, 2, 1, 4, 1, 3};
   

    double sums = weighted_average(number, 6);

    std::cout << "Sum: " << sums << std::endl;
}