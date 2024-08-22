#include "MusicBox.h"

MusicBox::MusicBox() {
    songname = "\0";
    width = 0;
}

MusicBox::MusicBox(string songname, int width) {
    this->songname = songname;
    this->width = width;
}

std::string MusicBox::get_song() { return this->songname; }

int MusicBox::get_width() { return this->width; }

MusicBox::~MusicBox() {
    songname = "\0";
    width = 0;
}
