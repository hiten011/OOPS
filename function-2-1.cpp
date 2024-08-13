#include <iostream>
#include <stdlib.h>

using namespace std;

int *readNumbers(){

    int* array = new int[10];

    for (int i = 0; i < 10; i++){

        // taking input
        cin >> array[i];
        
    }

    return array;
}

void printNumbers(int *numbers,int length){

    for (int i = 0; i < length; i++){

        cout << i << " " << numbers[i] << endl;
    }
}

char convert(int num){

    switch (num) {
            case 0: return '0'; break;
            case 1: return '1'; break;
            case 2: return '2'; break;
            case 3: return '3'; break;
            case 4: return '4'; break;
            case 5: return '5'; break;
            case 6: return '6'; break;
            case 7: return '7'; break;
            case 8: return '8'; break;
            case 9: return '9'; break;
            case 10: return 'A'; break;
            case 11: return 'B'; break;
            case 12: return 'C'; break;
            case 13: return 'D'; break;
            case 14: return 'E'; break;
            case 15: return 'F'; break;
        }
        
}

void hexDigits(int *numbers, int length){

    for (int i = 0; i < length; i++){

        cout << i << " " << numbers[i] << " " << convert(numbers[i]) << endl;
    }
}

