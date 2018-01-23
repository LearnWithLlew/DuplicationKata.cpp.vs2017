#pragma once
#include "Song.h"
#include <vector>
#include <algorithm>

class Lesson31 :
    public Song
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
                if (name.find("a") != std::string::npos)
                {
                    std::transform(name.begin(), name.end(), name.begin(), ::toupper);
                    sing(name + "! Yay " + name + "!");
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

