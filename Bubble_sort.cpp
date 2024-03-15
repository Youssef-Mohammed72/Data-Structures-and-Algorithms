/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Bubble Sort       	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include <iostream>

using namespace std;

void bubble_sort(int* arr, int size);

int main()
{
    int arr[] = {21,80,10,20,30,50,500,100,-100};
    bubble_sort(arr,sizeof(arr)/sizeof(*arr));
    return 0;
}

void bubble_sort(int* arr, int size){
    int a,b,flag,temp;
    b=2;
    do{
        flag=0;
        for(a=0;a<=size-b;a++){
            if(arr[a+1]<arr[a]){
                temp = arr[a];
                arr[a]=arr[a+1];
                arr[a+1]=temp;
                flag++;
            }
        }
        b++;
    }while(flag>0);
    cout<<"Array After Sorted : ";
    for(int i=0 ;i<size;i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

}
