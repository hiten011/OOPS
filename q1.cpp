#include <iostream>

using namespace std;

int main(){

    double a = 23.2;
    char b = 'H';
    
    double *ptr1 = &a;
    char *ptr2 = &b;

    cout << *ptr1 << endl << *ptr2 << endl;

    return 0;
}