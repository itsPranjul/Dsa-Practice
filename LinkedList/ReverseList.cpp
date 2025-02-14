#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int value) {
        data=value;
        next=NULL;
    }

};

int main(){
    Node *Head;
    Head=NULL;
    int k=4;
    int arr[]={17,11,9,5,7,8,6,4,3,2};
    
    for(int i=0;i<10;i++){
        if(Head==NULL){
        Head=new Node(arr[i]);
    }
        else {
        Node*temp;
        temp=new Node(arr[i]);
        temp->next=Head;
        Head=temp;
    }
    }

    //Printing a list
    Node* temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    //Reverse a linked list

    Node*cur=Head,*prev=NULL,*fut=NULL;
        while(cur){
            fut=cur->next;
            cur->next=prev;
            prev=cur;
            cur=fut;
        }
        Head=prev;
    cout<<endl;
    cout<<"After reverse: ";
    Node* tem=Head;
    while(tem!=NULL){
        cout<<tem->data<<" ";
        tem=tem->next;
    }
}