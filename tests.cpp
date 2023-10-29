#include <catch2/catch_test_macros.hpp>
#include <string>
#include <vector>
using namespace std;
TEST_CASE("CORRECT OUTPUT 1") {
    std::string pattern = "aaba";
    std::string text = "aabaacaadaabaaba";
    std::vector<int> calculated = kmp(pattern, text);
    std::vector<int> actual = {0,9,12};
    REQUIRE(actual == calculated);
}

TEST_CASE("CORRECT OUTPUT 2") {
    std::string pattern2 = "aab";
    std::string text2 = "aaabaaababaabaa";
    std::vector<int> calculated2 = kmp(pattern, text);
    std::vector<int> actual2 = {1, 5, 10};
    REQUIRE(actual2 == calculated2);
}
TEST_CASE("CORRECT OUTPUT 3") {
    std::string pattern3 = "xyx";
    std::string text3 = "xz";
    std::vector<int> calculated3 = kmp(pattern, text);
    std::vector<int> actual3 = {-1};
    REQUIRE(actual3 == calculated3);
}