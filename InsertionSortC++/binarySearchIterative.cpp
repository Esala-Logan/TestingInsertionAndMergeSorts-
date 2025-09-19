#include<iostream>
void binarySearchIterative(const vector<int>& arr, int target)
{
	int left = 0;
	int right = arr.size() - 1;

		while (left <= right) {
			int mid = left + (right - left) / 2;
			if (arr[mid == target]) {
				return mid;
			}
			else if (target < arr[mid]) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
			return -1;

		}
}

//So here is what I did wrong: 

void binarySearchIterative(const vector<int>& arr, int target)
{
	//didnt put the vector into function parameters 
	//along with the target, also I forgot const

	int left = 0 //didnt define left at index arr[0]
	int right = arr.size() - 1 //std library and -1 because 
		// arr atarts at 0
		while (left <= right) {
			int mid = left + (right - left) /2 // while loop with correct equation


				if (arr[mid] == target) { //using arr[mid]
					return mid;
				}
				else if (arr[mid] < target) {
					left = mid + 1;
				else {
					right = mid - 1;
				}
			return -1; //not found 
				}
	}
}