#include <catch2/catch_test_macros.hpp>
#include <string>
#include <vector>
using namespace std;
TEST_CASE("PROCESS FILE") {
   std::vector<std::string> processed = file_process(std::string filename);
   std::vector<std::string> v= {
    "CCAGCTTGCGAAGTCTACATTGGTATATGAATGCGACCTAGAAGAGGGCGCTTAAAATTGGGAGTGGTTGATGCTCTATACTCCATTTGGTTTTTTCGTG",
    "CATCACCGCGATAGGCTGACAAGGGTTTAACATTGAATAGCAAGGCACTTCCGGTCTCAATGAAGGGCCGGGAAAGGTACGCGCGTGGTATGGGAGGATC",
    "AAGGGGCCAATAGAAAGGCTTCTCCCTCACTCGCTAGGAGGCAAATGCAGAACAATGGTTACTACATCGATACGTGAAACATGTCCAACGGTTGCCCAAA",
    "GTGTTAAGTGTCTATCACCCCTAGGGCCGTTTCCCGGATATAAACGCCAGGTTGAATCCGCATTTGAAGCTACCATGGATGAGTCTGGGTCGAGCGCGCC",
    "GCATTTATTGCGTGAGTAGGGTCGACCAAGAACCGCTAGATGCGTCGCTGTACAAATAGTTGTCGACAGACCGTCGAGTTTAGAAAATGGTACCAGCATT"
   };
   REQUIRE(v==processed);
}
TEST_CASE("TEST 1") {
    std::string pattern = "CAT";
    std::vector<int> calculated = pre_process(pattern);
    std::vector<int> actual = {0,0,0};
    std::vector<int> output = {17,84};
    REQUIRE(actual == calculated);
    std::string text = "CCAGCTTGCGAAGTCTACATTGGTATATGAATGCGACCTAGAAGAGGGCGCTTAAAATTGGGAGTGGTTGATGCTCTATACTCCATTTGGTTTTTTCGTG";
    REQUIRE(kmp(text, pattern, calculated)==output);
}
TEST_CASE("TEST 2") {
    std::string pattern1 = "GGGT";
    std::vector<int> calculated1 = pre_process(pattern);
    std::vector<int> actual1 = {0,1,2,0};
    std::vector<int> output1 = {22};
    REQUIRE(actual1 == calculated1);
    std::string text1 = "CATCACCGCGATAGGCTGACAAGGGTTTAACATTGAATAGCAAGGCACTTCCGGTCTCAATGAAGGGCCGGGAAAGGTACGCGCGTGGTATGGGAGGATC";
    REQUIRE(kmp(text1, pattern1, calculated1)==output);
}
TEST_CASE("TEST 3") {
    std::string pattern = "AAG";
    std::vector<int> calculated2 = pre_process(pattern);
    std::vector<int> actual2 = {0,1,0};
    std::vector<int> output2 = {0,14};
    REQUIRE(actual2 == calculated2);
    std::string tex2 = "AAGGGGCCAATAGAAAGGCTTCTCCCTCACTCGCTAGGAGGCAAATGCAGAACAATGGTTACTACATCGATACGTGAAACATGTCCAACGGTTGCCCAAA";
    REQUIRE(kmp(text2, pattern2, calculated2)==output2);
}
TEST_CASE("TEST 4") {
    std::string pattern3 = "GTGT";
    std::vector<int> calculated3 = pre_process(pattern);
    std::vector<int> actual3 = 0,0,1,2};
    std::vector<int> output3 = {0,7};
    REQUIRE(actual3 == calculated3);
    std::string text3 = "GTGTTAAGTGTCTATCACCCCTAGGGCCGTTTCCCGGATATAAACGCCAGGTTGAATCCGCATTTGAAGCTACCATGGATGAGTCTGGGTCGAGCGCGCC";
    REQUIRE(kmp(text3, pattern3, calculated3)==output3);
}
TEST_CASE("TEST 5") {
    std::string pattern4 = "ATT";
    std::vector<int> calculated4 = pre_process(pattern);
    std::vector<int> actual4 = {0,0,0};
    std::vector<int> output4 = {2,6,98};
    REQUIRE(actual4 == calculated3);
    std::string text4 = "GCATTTATTGCGTGAGTAGGGTCGACCAAGAACCGCTAGATGCGTCGCTGTACAAATAGTTGTCGACAGACCGTCGAGTTTAGAAAATGGTACCAGCATT";
    REQUIRE(kmp(text4, pattern4, calculated4)==output4);
}