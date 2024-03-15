/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Binary Search     	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include<iostream> 
using namespace std;

int binary_search(int* arr, int first, int last, int target);
int recursion_binary_search(int* arr, int first, int last, int target);

int main(void) {
	int size;
	int target;
	cout << "Enter The Size Of The Array : ";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "Enter Value of arr[" << i << "] : ";
		cin >> arr[i];
	}
	cout << "Enter The Value You Want To Search about it : ";
	cin >> target;
	cout << "The Index of Searched Value by binary search is : " << binary_search(arr, 0, size,target);
	cout << "\nThe Index of Searched Value by recursive binary search is : " << recursion_binary_search(arr, 0, size, target);
	return 0;
}
int binary_search(int* arr, int first, int last, int target) {
	int mid;
	while (first <= last) {
		mid = (first + last) / 2;
		if (target == arr[mid])
			return mid;
		else if (target > arr[mid] )
			first = mid + 1;
		else
			last = mid - 1;
	}
	return -1;
}

int recursion_binary_search(int* arr, int first, int last, int target) {
	int mid;
	while (first <= last) {
		mid = (first + last) / 2;
		if (target == arr[mid])
			return mid;
		else if (target > arr[mid])
			return recursion_binary_search(arr, first + 1, last, target);
		else
			return recursion_binary_search(arr, first, mid-1, target);
	}
	return -1;
}