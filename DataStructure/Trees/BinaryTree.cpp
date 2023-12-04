#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;

node(int d){
    this->data = d;
    this->right= NULL;
    this->left= NULL;
}

};

node* buildTree(node* root){

cout<<"Enter the data for node: "<<endl;
int data;
cin>>data;
root= new node(data);

}

int main(){

    node* root = NULL;

    //Creating a Tree
root= buildTree(root);



return 0;
}