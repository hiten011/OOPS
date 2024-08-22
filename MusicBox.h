#ifndef MusicBox_H
#define MusicBox_H

#include <iostream>
#include <string>

using namespace std;


class MusicBox{

    private:
        string songname;
        int width;
    
    public:
        MusicBox();          // a default constructor 
        MusicBox(std::string songname, int width); // a constructor that takes the song and width as arguments
        std::string get_song();  // returns the name of the song that the music box plays
        int get_width();    // returns the width in centimetres of the music box
        ~MusicBox();       //A default destructor
};

#endif