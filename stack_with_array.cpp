/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Stack with Array   	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include <iostream>

using namespace std;

class stack_using_array {

private: int size, top, *arr;

public:
    stack_using_array(int size){
        size = size;
        arr = new int[size];
        top = 0;
    }
    stack_using_array(){
        size = 10;
        arr = new int[size];
        top = 0;
    }
    void push(int data){
        if(top>=size){
            cout<<"Stack Is Full ,So Size Will Doubled";
            double_size();
        }
        arr[top] = data;
        top++;
    }
    int pop(void){
        if(top<=0)
            cout<<"Stack is Empty";
         top--;
        return arr[top];
    }

    void double_size(void){
        int *temparr = new int[size*2];
        for(int i=0;i<top;i++){
            temparr[i] = arr[i];
        }
        size = size*2;
        delete arr;
        arr=temparr;
        cout<<"\nthe new size = "<<size;
    }
    bool is_empty(){
        return top==0;
    }
    bool is_full(){
        return top==size;
    }
    void print_stack(){
        cout<<"\nthe content of stack is : ";
        for(int i = top-1 ; i>=0 ;i--){
            cout<<arr[i]<<"\t";
        }
    }
};

int main()
{
    stack_using_array obj(5);
    for(int i=0 ;i<10;i++){
        obj.push(i*10);
    }
    obj.print_stack();
    for(int i=0 ;i<5;i++){
        obj.pop();
    }
    obj.print_stack();
    cout<<endl<<obj.is_empty();
    cout<<endl<<obj.is_full();
    return 0;
}
