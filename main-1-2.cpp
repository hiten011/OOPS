#include <iostream>

extern double array_mean(int array[], int n);

int main(){

    int number[] = {1, 2, 3, 4, 5};
   

    double sums = array_mean(number ,0);

    std::cout << "Sum: " << sums << std::endl;
}


