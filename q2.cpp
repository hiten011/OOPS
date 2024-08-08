#include <iostream>

using namespace std;

void changeValue(double* num){
    *num = 42;
}

int main(){

    double a = 23.2;
    
    double *ptr1 = &a;

    changeValue(ptr1);

    cout << a << endl << sizeof(a) << endl << sizeof(ptr1) << endl << sizeof(*ptr1);

    return 0;
}