#pragma once
#include <string>
#include <sstream>

class Song
{
    
public:
    Song()
    {
    };
    std::stringstream song;

    void sing(std::string str)
    {
        song << str << std::endl;
    };
};
