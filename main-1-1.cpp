#include <iostream>

extern int sum_num(int array[], int len);

int main(){

    int number[] = {1, 2, 3, 4, 5};
   

    int sums = sum_num(number ,5);

    std::cout << "Sum: " << sums << std::endl;
}


