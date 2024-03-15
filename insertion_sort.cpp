/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Insertion Sort     	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include <iostream>

using namespace std;

void insertion_sort(int* arr,int size);

int main()
{
    int arr[] = {21,80,10,20,30,50,500,100,-100};
    insertion_sort(arr,sizeof(arr)/sizeof(*arr));
    return 0;
}

void insertion_sort(int* arr,int size){
    int a,b,temp;
    for(a=1;a<size;a++){
        temp =arr[a];
        for(b=a-1;b>=0;b--){
            if(temp<arr[b]){
                arr[b+1]=arr[b];
            }
            else
                break;
        }
        arr[b+1] = temp;
    }
    cout<<"Array After Sorted : ";
    for(int i=0 ;i<size;i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
