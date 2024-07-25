#include <iostream>
using namespace std;

void two_five_nine(int array[], int n){

    int two = 0;
    int five = 0;
    int nine = 0;
    int num = 0;

    for(int i = 0; i < n; i++){
        
        num = array[i];

        switch (num){
            case 9:
            nine++;
            break;

            case 5:
            five++;
            break;

            case 2:
            two++;
            break;
        }

    }

    cout << "2:" << two << ";5:" << five << ";9:" << nine << ";\n";
    
    }