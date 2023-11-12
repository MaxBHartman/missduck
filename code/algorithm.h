/**
 * @file algorithm.h
 * Implementation of the Knuth–Morris–Pratt algorithm for Pattern Searching.
 *
 * @author Max Hartman
 * @author Michelle Ru
 * *
 */

#pragma once
#include <vector>
#include <string>
using std::vector;
using std::string;

std::vector<std::string> file_process(std::string filename);
std::vector<int> pre_process(std::string pattern);
std::vector<int> kmp(std::string dna_strand, std::string pattern, std::vector<int> pre_process);