/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Queue              	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

class Queue{
private:
    node *front,*rear;
public:
    Queue(){
        front=rear=NULL;
    }
    void enqueue(int data){
        node *temp=new node;
        temp->data = data;
        temp->next = NULL;
        if(rear==NULL)
            rear=front=temp;
        else{
            rear->next=temp;
            rear=temp;
        }
    }
    int dequeue(){
        int dd;
        node *temp;
        dd=front->data;
        temp=front;
        front=front->next;
        delete temp;
        if(front==NULL)
            rear = NULL;
        return dd;
    }
    void print_Queue(){
        node*temp;
        for(temp=front;temp!=NULL;temp=temp->next){
            cout<<temp->data<<"\t";
        }
        cout<<endl;
    }
};

int main()
{
    Queue s1,s2;
    int n;
    while(true){
        cout<<"Enter number number\n";
        cin>>n;
        if(n==0)
            break;
        else{
            if(n%2==0)
                s1.enqueue(n);
            else
                s2.enqueue(n);
        }
    }
    cout<<"Content Of Queue 1 : ";
    s1.print_Queue();
    cout<<"Content Of Queue 2 : ";
    s2.print_Queue();
    return 0;
}
