#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl){
    int len = pl.numPeople;

    // creating new PersonList
    PersonList deep_copy;
    deep_copy.numPeople = len;
    deep_copy.people = pl.people;

    return deep_copy;
}