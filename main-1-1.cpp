#include <iostream>
#include "Person.h"

using namespace std;

extern Person* createPersonArray(int n);

int main(){
    Person* people = createPersonArray(5);

    cout << people[2].name << endl;
    cout << people[2].age << endl;

    return 0;
}