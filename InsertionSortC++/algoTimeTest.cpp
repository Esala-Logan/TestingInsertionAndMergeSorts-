#include "algoTimeTest.h"
#include <iostream>
#include <ctime>

//simple time function using ctime time record sort times for printing to the console
double algoTimeTest(std::vector<int>& array, const std::string& description,
    void (*sortFunc)(std::vector<int>&)) {
    clock_t start = clock();
    sortFunc(array);
    clock_t end = clock();

    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    std::cout << description << " took " << elapsed << " seconds" << std::endl;
    return elapsed;
}
