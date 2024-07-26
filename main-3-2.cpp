#include <iostream>

extern int median_array(int array[], int n);

int main(){

    int number[] = {3,5,2,1};
   

    int sums = median_array(number, 4);

    std::cout << "Sum: " << sums << std::endl;
}