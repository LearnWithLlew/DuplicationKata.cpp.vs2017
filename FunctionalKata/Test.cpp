#include "stdafx.h"
#include "ApprovalTests.hpp"
#include "Lesson1Straight.h"
#include <string>
#include "Lesson2Variable.h"
#include "Lesson21.h"

using namespace std;



TEST_CASE("Test Sin") {
     Lesson1Straight s;
     s.singCatSong();
      Approvals::verify(s.song.str(), WinMergeReporter());
}
TEST_CASE("testBeer")
{
    Lesson2Variable s;
    s.singBottlesOfBeer();
    Approvals::verify(s.song.str());;
}
TEST_CASE("testNames")
{
    Lesson21 song;
    auto names = { std::string("Llewellyn"), std::string("Samatha"), std::string("Tomas"), std::string("Emilia") };
    song.singSong(1, names);
    song.singSong(2, names);
    song.singSong(3, names);
    Approvals::verify(song.song.str());
}
//@Test
//public void testNumbers()
//{
//    Lesson3HigherOrderFunctions song = new Lesson3HigherOrderFunctions();
//    song.singCheers();
//    Approvals.verify(song.song);
//}
//@Test
//public void testNames3()
//{
//    Lesson31 song = new Lesson31();
//    String[] names = { "Llewellyn", "Samatha", "Tomas", "Emilia" };
//    song.singSong(1, names);
//    song.singSong(2, names);
//    song.singSong(3, names);
//    Approvals.verify(song.song);
//}