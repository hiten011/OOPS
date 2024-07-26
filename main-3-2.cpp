#include <iostream>

extern int median_array(int array[], int n);

int main(){

    int number[] = {3,5,2,1, 3};
   

    int sums = median_array(number, 5);

    std::cout << "Sum: " << sums << std::endl;
}