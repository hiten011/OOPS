#include "Orchestra.h"
#include "Musician.h"
#include <string>

using namespace std;

Orchestra::Orchestra() {
    num_musicians = 0;
    max_musicians = 0;
    musicians = nullptr;
}

Orchestra::Orchestra(int size) {
    max_musicians = size-1;
    musicians = new Musician[size];
}

int Orchestra::get_current_number_of_members() { return num_musicians; }

bool Orchestra::has_instrument(std::string instrument) { 

    for (int i = 0; i < num_musicians; i++){
        // checking if the given instrument matches
        if (musicians[i].get_instrument() == instrument){
            return true;            
        }
    }

    return false;
}

Musician* Orchestra::get_members() { return musicians; }

bool Orchestra::add_musician(Musician new_musician) { 
    
    if (this->num_musicians != this->max_musicians){
        this->musicians[this->num_musicians] = new_musician;
        this->num_musicians++;
        return true;
    }

    return false;
}

Orchestra::~Orchestra() {
    delete[] musicians;
}
