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

std::vector<int> kmp(std::string pattern, std::string text);

std::vector<int> next(std::string pattern);
