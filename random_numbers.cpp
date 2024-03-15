/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Random Numbers       	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int generate_random_numbers(int *arr, int size,int max);
int generate_un_repeated_random_numbers(int *arr ,int size ,int max ,int min);

int main()
{
    int size;
    int min ,max;
    cout<<"Enter Maximum & Minimum number respectively\n";
    cin>>max>>min;
    cout<<"Enter Size Of Array : ";
    cin>>size;
    int* arr =new int[size];
    int* arr2 =new int[size];
    generate_random_numbers(arr ,size ,max);
    generate_un_repeated_random_numbers(arr2 ,size ,max ,min);
    cout<<"The Generated unrepeated Random Numbers Is :";
    for(int i=0; i<size; i++){
        cout<<arr2[i]<<"\t";
    }
    cout<<"\n";
    return 0;
}

int generate_random_numbers(int *arr, int size, int max) {
    srand(time(NULL));
    cout<<"The Generated Random Numbers Is :";
    for(int i=0;i<size;i++){
        arr[i] = rand()%max;
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int generate_un_repeated_random_numbers(int *arr ,int size ,int max ,int min){
    int a,b,temp;
    if(size > max-min+1) {
        cout<<"ERROR Generated Number\n";
    }
    srand(time(NULL));
    for(a=0 ;a<size ;) {
        temp = rand()%(max-min+1)+min;
        for(b=0 ; b<a; b++){
            if(temp == arr[b])
                break;
        }
        if(a==b) {
            arr[a]=temp;
            a++;
        }
    }
}
