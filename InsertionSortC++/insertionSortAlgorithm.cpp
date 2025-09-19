#include "insertionSortAlgo.h"

void insertionSortAlgo(std::vector<int>& array) {       //passing unchanged array by reference
    int n = array.size();                              //using size function for using n for loop limits       
    for (int i = 1; i < n; i++) {                     //i being the start n being number of inputs we iterate 
        int key = array[i];                          //through array i 
        int j = i - 1;

        while (j >= 0 && array[j] > key) {         //shifts elements while j is in the array
            array[j + 1] = array[j];              //moves element where key needs to be to the right
            j--;                                 //continued checking to the left
        }
        array[j + 1] = key;                    //inserting the key in its spot
    }
}

	//The elements are sorted by comparing the 
	//second element with the first element
	//if the second element is smaller than
	//the first then we swap it
	//continue to do this from third fourth and fifth 
	//comparing all elements before the current position
	//in the list 
