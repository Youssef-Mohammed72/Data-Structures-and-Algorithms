/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Count Sort        	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include<iostream>
using namespace std;
#define SIZE 30
struct st
{
	int id;
	char grade ;
};
int main(void)
{
	struct st list[SIZE] , temp[SIZE];
	int k;
	int counters[6] ;
	char ch;
	for(k = 0 ; k < SIZE ; k++){
		list[k].id = k + 1001 ;
		list[k].grade = 'A' + rand() % 6 ;
		cout << k << "\t" << list[k].id << "\t" << list[k].grade << "\n";
	}

	for(k = 0 ; k < 6 ; k++)
        counters[k] = 0;

	for(k = 0 ; k < SIZE ; k++)
        counters[list[k].grade - 'A']++;

	cout << "\n Counters:\n";
	for(k = 0 ; k < 6 ; k++){
		ch = 'A' + k ;
		cout << k << "\t" << ch << "\t" << counters[k] << "\n";
	}

	cout << "New counters \n" << 0 << "\t" << 'A' << "\t" << counters[0] << "\n";
	for(k = 1 ; k < 6 ; k++){
		ch = 'A' + k ;
		counters[k] = counters[k-1] + counters[k] ;
		cout << k << "\t" << ch << "\t" << counters[k] << "\n";
	}

	for(k = SIZE-1 ; k >= 0 ; k--)
		temp[--counters[list[k].grade - 'A']] = list[k];

	cout << "Data after sorting according to grade: \n";
	for(k = 0 ; k < SIZE ; k++){
		list[k] = temp[k];
		cout << k << "\t" << list[k].id << "\t" << list[k].grade << "\n";
	}
	return 0;
}



