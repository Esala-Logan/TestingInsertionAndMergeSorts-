#include "mergeSortAlgo.h"

                                                                                //Wrapper checking array
void mergeSortAlgo(std::vector<int>& array) {
    if (array.empty()) return;
    mergeSortRecursion(array, 0, array.size() - 1);
}


void mergeSortRecursion(std::vector<int>& array, int l, int r) {               //Recursive merge sort
    if (l < r) {
        int m = l + (r - l) / 2;                                             //Middle

        mergeSortRecursion(array, l, m);
        mergeSortRecursion(array, m + 1, r);

        mergeSortedArrays(array, l, m, r);
    }
}


void mergeSortedArrays(std::vector<int>& array, int l, int m, int r) {                      //Merge two sorted halves
    int leftSubSize = m - l + 1;
    int rightSubSize = r - m;

    std::vector<int> left(array.begin() + l, array.begin() + l + leftSubSize);           //left and right sub arrays 
    std::vector<int> right(array.begin() + m + 1, array.begin() + m + 1 + rightSubSize);

    int i = 0, j = 0, k = l;

    while (i < leftSubSize && j < rightSubSize) {
        if (left[i] <= right[j]) array[k++] = left[i++];
        else array[k++] = right[j++];
    }

    while (i < leftSubSize) array[k++] = left[i++];                                      
    while (j < rightSubSize) array[k++] = right[j++];
}

//The inputs are checked with the beginning wrapper function to check if any elements are in the array
//The elements are then the midpoint is calculated in a way to avoid overflow
//in the mergeSortRecursion helper function 
//when moving onto the merge sorted arrays function
//Here the elements are broken up into sub arrays that are created
//They are then sorted and merged after 