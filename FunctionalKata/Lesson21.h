#pragma once
#include "Song.h"
#include <vector>

class Lesson21 : public Song
{
public:
    void singSong(int style, std::vector<std::string> names)
    {
        switch (style)
        {
        case 1:
            for (auto name : names)
            {
                if (strncmp(name.c_str(), "L", 1) == 0)
                {
                    sing("Hip Hip Horray! For " + name);
                }
                else
                {
                    sing("Hello " + name + ", it's nice to meet you.");
                }
            }
            break;
        case 2:
            for (auto name : names)
            {
                if (strncmp(name.c_str(), "S", 1) == 0)
                {
                    sing("Say yeah! Say yo! Say " + name);
                }
                else
                {
                    sing("Hello " + name + ", it's nice to meet you.");
                }
            }
            break;
        case 3:
            for (auto name : names)
            {
                sing("Hello " + name + ", it's nice to meet you.");
            }
            break;
        }
    }
};
