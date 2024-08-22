#include <iostream>
#include "MusicBox.h"

int main() {
    MusicBox m1;
    std::cout << "Default instrument: " << m1.get_song() << ", Default experience: " << m1.get_width() << std::endl;

    MusicBox m2("guitar", 5);
    std::cout << "Instrument: " << m2.get_song() << ", Experience: " << m2.get_width() << std::endl;

    return 0;
}