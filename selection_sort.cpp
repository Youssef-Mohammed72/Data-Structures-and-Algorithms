/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Selection Sort    	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include <iostream>

using namespace std;

void selection_sort(int *arr, int size);

int main()
{
    int arr[] = {21,80,500,10,20,30,50,100,-100};
    selection_sort(arr,sizeof(arr)/sizeof(*arr));
    cout<<"Array After Sorted : ";
    for(int i=0 ;i< sizeof(arr)/sizeof(*arr);i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}

void selection_sort(int *arr, int size){
    int a, b, minloc ,temp;
    for(a=0 ; a<size-1 ;a++){
        minloc = a;
        for(b=a+1 ;b<size;b++){
            if(arr[b]<arr[minloc])
                minloc = b;
        }
        temp = arr[a];
        arr[a] = arr[minloc];
        arr[minloc] = temp;
    }
}
