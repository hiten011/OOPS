#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl){
    int len = pl.numPeople;

    // creating new PersonList
    PersonList deep_copy;
    deep_copy.numPeople = len;
    deep_copy.people = new Person[len];

    for (int i = 0; i < len; i++){
        deep_copy.people[i].name = pl.people[i].name;
        deep_copy.people[i].age = pl.people[i].age;
    }

    return deep_copy;
}