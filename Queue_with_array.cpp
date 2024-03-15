/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Queue with Array   	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include <iostream>

using namespace std;

class Queue_with_Array{

private:
    int size ,counter, front ,rear ,*arr;
public:
    Queue_with_Array(int size){
        size = size;
        arr=new int[size];
        front=rear=counter=0;
    }
    Queue_with_Array(){
        size = 10;
        arr=new int[size];
        front=rear=counter=0;
    }
    void enqueue(int data){
        arr[rear] = data;
        rear = (rear+1)%size;
        counter++;
    }
    int dequeue(void){
        int temp = front;
        front = (front+1)%size;
        counter--;
        return arr[temp];
    }
    bool is_empty(){
        return counter==0;
    }
    bool is_full(){
        return counter == size;
    }
    void double_size(){
        int *temparr = new int[size*2];
        for(int i=0;i<size;i++){
            temparr[i]=arr[(i+front)%size];
        }
        size=size*2;
        front=0;
        rear=counter;
        delete arr;
        arr=temparr;
    }
    void print_queue(){
        cout<<"\nthe content of Queue is : ";
        for(int i=front;i<counter;i++){
            cout<<arr[i]<<"\t";
        }
    }
};

int main()
{

    Queue_with_Array obj(10);
    for(int i=0;i<10;i++){
        obj.enqueue(i*10);
    }
    //obj.print_queue();
    cout<<endl<<obj.is_full()<<endl;
    for(int i=0 ;i<5;i++){
        cout<<obj.dequeue()<<"\t";
    }
    //obj.print_queue();
    cout<<endl<<obj.is_empty();
    return 0;
}
