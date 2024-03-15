/**************************************************************************/
/**************************************************************************/
/***************** Author: 	  Youssef Mohammed AbdelFattah ****************/
/***************** Component: Stack              	  	   ****************/
/***************** Version:   1.0 						   ****************/
/**************************************************************************/
/**************************************************************************/

#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

class stack{
private:
    node *top;
public:
    stack(){
        top = NULL;
    }
    void push(int data){
        node *temp = new node;
        temp->data = data;
        temp->next = top;
        top = temp;
    }
    int pop(){
        int dd;
        node*temp = top;
        dd = top->data;
        top = top->next;
        delete temp;
        return dd;
    }
    void print_stack(){
        node*temp;
        for(temp=top;temp!=NULL;temp=temp->next){
            cout<<temp->data<<"\t";
        }
        cout<<endl;
    }
};

int main()
{
    stack s1,s2;
    int n;
    while(true){
        cout<<"Enter number number\n";
        cin>>n;
        if(n==0)
            break;
        else{
            if(n%2==0)
                s1.push(n);
            else
                s2.push(n);
        }
    }
    cout<<"Content Of Stack 1 : ";
    s1.print_stack();
    cout<<"Content Of Stack 2 : ";
    s2.print_stack();
    return 0;
}
