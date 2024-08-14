#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl);

int main(){
    PersonList array = createPersonList(5);
    PersonList array1 = deepCopyPersonList(array);

    cout << array1.numPeople << endl;
    cout << array1.people[2].name << endl;

    return 0;
}