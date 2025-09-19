#pragma once
#include <vector>
#include <iostream>

// Wrapper to call merge sort
void mergeSortAlgo(std::vector<int>& array);

// Internal recursive functions
void mergeSortRecursion(std::vector<int>& array, int l, int r);
void mergeSortedArrays(std::vector<int>& array, int l, int m, int r);
