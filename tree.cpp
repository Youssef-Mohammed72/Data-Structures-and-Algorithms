/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Tree              	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include<bits/stdc++.h>
using namespace std;

struct node{
    char name ,father;
    int order;
};


class mystack{
private:
    int top ,size;
    char *arr;
public:
    mystack(void) {
        size=10;
        arr=new char[size];
        top=0;
    }
    mystack(int ss) {
        size=ss;
        arr=new char[size];
        top=0;
    }
    void push(int data){
        arr[top++]=data;
    }
    char pop(void){
    return arr[--top];
    }
    bool is_full(void){
        return top==size;
    }
    bool is_empty(void){
        return (top==0);
    }
};

class myqueue{
private:
    int front,rear,size,counter;
    char *arr;
public:
    myqueue(void){
        size=10;
        arr = new char[size];
        rear=front=counter=0;
    }
     myqueue(int ss){
        size=ss;
        arr = new char[size];
        rear=front=counter=0;
    }
    void enqueue(char data){
        arr[rear]=data;
        rear=(rear+1)%size;
        counter++;
    }
    char dequeue(void){
    char temp = arr[front];
    front=(front+1)%size;
    counter--;
    return temp;
    }
    bool is_empty(void){
        return counter==0;
    }
    bool is_full(void){
        return counter==size;
    }
};

void print_DFS(node *ptr ,int size);
void print_BFS(node *ptr ,int size);

int main(void){
    node arr[14]={
        {'A','J',2},{'B','F',3},{'C','H',1},{'D','J',3},{'E','A',1},{'F', '0',0},{'G','F',4},
        {'H','B',1},{'J','F',1},{'K','J',1},{'L','H',2},{'M','G',2},{'N','G',1},{'P','F',2}
        };
    cout<<"DFS: ";
    print_DFS(arr,14);

    cout<<"\nBFS: ";
    print_BFS(arr,14);
    return 0;
}

void print_DFS(node *ptr ,int size){
    int k ,counter;
    char *sons=new char[size];
    mystack st1;
    for(k=0;k<size;k++){
        if(ptr[k].father=='0'){
            st1.push(ptr[k].name);
            break;
        }
    }
    char temp;
    while(st1.is_empty()==false){
        temp=st1.pop();
        cout<<temp<<"\t";
        counter=0;
        for(k=0;k<size;k++){
            if(ptr[k].father==temp){
                sons[ptr[k].order]=ptr[k].name;
                counter++;
            }
        }
        for(k=counter;k>=1;k--){
            st1.push(sons[k]);
        }
    }
}

void print_BFS(node *ptr ,int size){
    int k ,counter;
    char *sons=new char[size];
    myqueue st1;
    for(k=0;k<size;k++){
        if(ptr[k].father=='0'){
            st1.enqueue(ptr[k].name);
            break;
        }
    }
    char temp;
    while(st1.is_empty()==false){
        temp=st1.dequeue();
        cout<<temp<<"\t";
        counter=0;
        for(k=0;k<size;k++){
            if(ptr[k].father==temp){
                sons[ptr[k].order]=ptr[k].name;
                counter++;
            }
        }
        for(k=1;k<=counter;k++){
            st1.enqueue(sons[k]);
        }
    }
}
