#pragma once
#include "Song.h"

class Lesson2Variable :
    public Song
{
public:
    void singBottlesOfBeer()
    {
        sing("100 bottles of beer on the wall");
        sing("100 bottles of beer");
        sing("Take one down, pass it around");
        sing("99 bottles of beer on the wall");
        sing("99 bottles of beer on the wall");
        sing("99 bottles of beer");
        sing("Take one down, pass it around");
        sing("98 bottles of beer on the wall");
    }
};
