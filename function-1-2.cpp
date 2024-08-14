#include <iostream>
#include "Person.h"

PersonList createPersonList(int n){
    PersonList people_array;
    people_array.numPeople = n;
    people_array.people = new Person[n];
    
    for (int i = 0; i < n; i++){
        people_array.people[i].name = "Jane Doe";
        people_array.people[i].age = 1; 
    }

    return people_array;
}