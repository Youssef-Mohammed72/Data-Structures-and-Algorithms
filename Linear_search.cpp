/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Linear Search     	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include<iostream>
using namespace std;

int linear_Search(int* arr, int target, int size);

int main() {
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
	cout << "The Index of Searched Value is : " << linear_Search(arr, target, size);
	return 0;
}

int linear_Search(int* arr, int target, int size) {
	int index;
	for ( index = 0; index < size; index++) {
		if (arr[index] == target) {
			break;
		}
	}
	if (index == size) {
		return -1;
	}
	else
		return index;
}