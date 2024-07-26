#include <iostream>
using namespace std;

void print_pass_fail(char grade){

    switch (grade){
        case 'A':
            cout << "PASS" << endl;
        case 'B':
            cout << "PASS" << endl;
        case 'C':
            cout << "PASS" << endl;
        case 'D':
            cout << "FAIL" << endl;
        case 'E':
            cout << "FAIL" << endl;
    }

}