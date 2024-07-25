#include <iostream>

extern bool is_fanarray(int array[], int n);

int main(){

    int number[] = {1, 2, 3, 4, 5};
   

    bool sums = is_fanarray(number ,5);

    std::cout << "Sum: " << sums << std::endl;
}