#include <iostream>

extern bool sum_if_palindrome(int array[], int length);

int main(){

    int  array[] = {1, 2, 3, 3, 1};
    int length = 5;

    int sum = sum_if_palindrome(array, length);

    std:: cout << sum << "\n";
}