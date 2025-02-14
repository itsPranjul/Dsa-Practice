#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *left,*right;

    Node(int value){
        data=value;
        left=right=NULL;
    }
};

Node * BinaryTree() {
    int x;
    cin>>x;
    if(x==-1)
    return NULL;

    Node *temp = new Node(x);
    
    cout<<"Enter a left Child: "<<x<<" ";
    temp->left=BinaryTree();
    
    cout<<"Enter a right child: "<<x<<" ";
    temp->right=BinaryTree();

    return temp;
}

int main(){
    cout<<"Enter the root: ";
    Node *root;
    root=BinaryTree();

}