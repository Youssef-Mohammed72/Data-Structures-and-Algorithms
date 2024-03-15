/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Traditional Sort   	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include <iostream>

using namespace std;

void traditional_sort(int *arr ,int size);

int main()
{
    int arr[] = {21,80,10,20,30,50,100,-100};
    traditional_sort(arr,sizeof(arr)/sizeof(*arr));
    return 0;
}

void traditional_sort(int *arr ,int size){
    int a, b, temp;
    for(a=0;a<size-1;a++){
        for(b=a+1;b<size;b++){
            if(arr[b]<arr[a]){
                temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }
    cout<<"Array After Sorted : ";
    for(int i=0 ;i<size;i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
