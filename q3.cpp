#include <iostream>

using namespace std;

void changeValue(int* num){ 
    
    cout << sizeof(num) / sizeof(int) << endl;
}

int main(){

    int a[] = {2, 3, 4};

    cout << sizeof(a) / sizeof(int) << endl;

    changeValue(a);
}