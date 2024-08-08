#include <iostream>

extern double arrayMin(double *array, int size);

using namespace std;

int main(){

    double array[] = {3, 4, 5, 6, 1, 8, 9 , 0};

    int min = arrayMin(array, 8);

    cout << min << endl;
}