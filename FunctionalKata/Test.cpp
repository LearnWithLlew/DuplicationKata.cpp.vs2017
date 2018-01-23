#include "stdafx.h"
#include "Catch.hpp"
#include "Lesson1Straight.h"
#include <string>

using namespace std;



TEST_CASE("Test Sin") {
     Lesson1Straight s;
     s.singCatSong();
     auto expected = "We gave the cat to a little kid\n"
         "But the cat came back\n"
         "The very next day\n"
         "Oh the cat came back\n"
         "We thought he was a goner\n"
         "But the cat came back, he just wouldn't go away\n"
         "We sent the cat out on a boat\n"
         "But the cat came back\n"
         "The very next day\n"
         "Oh the cat came back\n"
         "We thought he was a goner\n"
         "But the cat came back, he just wouldn't go away\n";
    REQUIRE(expected == s.song.str());
}
