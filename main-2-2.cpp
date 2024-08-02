#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    
    int binary_digits[] = {0, 1, 0, 1};

    int ans = binary_to_int(binary_digits, 4);

    std:: cout << ans << std:: endl; 
}