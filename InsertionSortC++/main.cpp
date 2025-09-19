#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "insertionSortAlgo.h"
#include "mergeSortAlgo.h"
#include "algoTimeTest.h"


std::vector<int> generateSortedAscending(int size) {               // Generate test arrays
    std::vector<int> array(size);
    for (int i = 0; i < size; i++) array[i] = i;
    return array;
}

std::vector<int> generateReverseDescending(int size) {
    std::vector<int> array(size);
    for (int i = 0; i < size; i++) array[i] = size - i;
    return array;
}

std::vector<int> generateRandom(int size) {
    std::vector<int> array(size);
    for (int i = 0; i < size; i++) array[i] = rand() % 100000;
    return array;
}

int main() {
    srand(time(0));

    int sizes[] = { 1000, 5000, 10000 };
    //print our outputs and results from sorts 
    for (int size : sizes) {
        auto array = generateSortedAscending(size);
        algoTimeTest(array, "Insertion Sort with sorted data " + std::to_string(size), insertionSortAlgo);

        array = generateReverseDescending(size);
        algoTimeTest(array, "Insertion Sort with reverse sorted data " + std::to_string(size), insertionSortAlgo);

        array = generateRandom(size);
        algoTimeTest(array, "Insertion Sort with Randomly generated data " + std::to_string(size), insertionSortAlgo);

        array = generateSortedAscending(size);
        algoTimeTest(array, "Merge Sort with sorted data " + std::to_string(size), mergeSortAlgo);

        array = generateReverseDescending(size);
        algoTimeTest(array, "Merge Sort with reverse sorted data " + std::to_string(size), mergeSortAlgo);

        array = generateRandom(size);
        algoTimeTest(array, "Merge Sort with Randomly generated data " + std::to_string(size), mergeSortAlgo);
    }
}
