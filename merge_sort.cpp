/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Merge Sort         	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include <iostream>

using namespace std;

void merge_two_sorted_list(int *arr, int f1 ,int e1 ,int f2 ,int e2);
void merge_sort(int *arr ,int first ,int last);

int main()
{
    int arr[9] = {21,80,500,10,20,30,50,100,-100};
    merge_sort(arr,0,8);
    for(int i=0 ;i< 8;i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}

void merge_two_sorted_list(int *arr, int f1 ,int e1 ,int f2 ,int e2){
    int *ptr = new int[e2-f1+1];
    int k1 ,k2 ,k3;
    k1=f1 ; k2=f2 ;k3=0;
    while((k1<=e1)&&(k2<=e2)){
        if(arr[k1]<arr[k2]){
            ptr[k3]=arr[k1];
            k3++;
            k1++;
        }
        else {
            ptr[k3]=arr[k2];
            k3++;
            k2++;
        }
    }
    while(k1<e1){
        ptr[k3]=arr[k1];
        k3++;
        k1++;
    }
    while(k2<e2){
        ptr[k3]=arr[k2];
        k3++;
        k2++;
    }
    for(int k=0;k <= e2-f1;k++){
        arr[k+f1]=ptr[k];
    }
}

void merge_sort(int *arr ,int first ,int last){
    int mid;
    if(first>=last) return;
    mid =(first+last)/2;
    merge_sort(arr,first,mid);
    merge_sort(arr,mid+1,last);
    merge_two_sorted_list(arr,first,mid,mid+1,last);
}
