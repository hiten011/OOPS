#include <iostream>

extern bool is_fanarray(int array[], int n);

int main(){

    int number[] = {1,  3, 3, 3, 3};
   

    bool sums = is_fanarray(number ,4);

    std::cout << "Sum: " << sums << std::endl;
}