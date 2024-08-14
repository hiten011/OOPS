#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);

int main(){
    PersonList array = createPersonList(5);

    cout << array.numPeople << endl;
    cout << array.people[2].name << endl;

    return 0;
}