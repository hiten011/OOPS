#include <iostream>
#include <stdlib.h>

using namespace std;

extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
extern int secondSmallestSum(int *numbers,int length);

int main(){

    int *array = readNumbers();
    
    cout << secondSmallestSum(array,10);

    delete[] array;
    

    return 0;
}