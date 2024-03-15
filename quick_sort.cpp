/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Quick Sort        	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include <iostream>

using namespace std;

void Quick_Sort(int *arr, int first ,int last);

int main()
{
    int arr[9] = {21,80,500,10,20,30,50,100,-100};
    Quick_Sort(arr,0,8);
    for(int i=0 ;i< 8;i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}

void Quick_Sort(int *arr, int first ,int last){
    int pivot,temp,k1,k2;
    if(first>=last) return;
    pivot=arr[first];
    k1 = first+1;
    k2 = last;
    while(k1<=k2){
        while((k1<=last)&&(arr[k1]<=pivot)) k1++;
        while((k2>first)&&(arr[k2]>=pivot)) k2--;
        if(k1<k2){
            temp = arr[k1];
            arr[k1] = arr[k2];
            arr[k2] = temp;
        }
    }
    arr[first] = arr[k2];
    arr[k2] = pivot;
    Quick_Sort(arr,first,k2-1);
    Quick_Sort(arr,k2+1,last);
}
