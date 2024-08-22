#include "StoreShelf.h"
#include "MusicBox.h"
#include <iostream>

StoreShelf::StoreShelf() {
    max_width = 0; // the maximum length of shelf
    num = 0;
    music_box_array = nullptr; // all the music_boxes on the shelf
}

StoreShelf::StoreShelf(int width) {
    this->max_width = width; // the maximum length of shelf
}

int StoreShelf::get_width() { return this->max_width; }

int StoreShelf::get_num_music_boxes() { return this->num; }

MusicBox* StoreShelf::get_contents() { return this->music_box_array; }

bool StoreShelf::add_music_box(MusicBox a_music_box) {

    int current_length = 0;

    // calculating the current width on shelf
    for (int i = 0; i < num; i++){
        current_length += music_box_array[i].get_width();
    }

    // checking if the length is full
    if (current_length < this->max_width){


        // adding the MusicBox on Shelf
        num++; // incrementing the value
        MusicBox *temp = new MusicBox[num]; // creating new array
        
        // copying thevalue of previous array to new one
        for (int j = 0; j < num - 1; j++){
            temp[j] = music_box_array[j];
        }

        //  adding the new value
        temp[num - 1] = a_music_box;

        // deleting the intial array
        delete[] music_box_array;

        // setting the pointer
        music_box_array = temp;

        
        return true;
    }
    else{
        return false;
    }
 }

 StoreShelf::~StoreShelf() {
    delete[] music_box_array;
 }
