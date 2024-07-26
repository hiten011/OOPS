#include <iostream>

extern int median_array(int array[], int n);

int main(){

    int number[] = {1, 2, 12, 10, 0};
   

    int sums = median_array(number, 5);

    std::cout << "Sum: " << sums << std::endl;
}