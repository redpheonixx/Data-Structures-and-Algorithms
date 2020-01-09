#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left, *right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};

void printInorder(node* root){
    if(root==NULL)
        return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

void printPreorder(node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

void printPostorder(node* root){
    if(root==NULL)
        return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}

/*
            1
          /   \
        2      3
       /  \   /  \
      4    5 6    7
                 / \
                8   9



*/

int main(){
    node *root= new node(1);
    root->left= new node(2);
    root->right= new node(3);
    root->left->left= new node(4);
    root->left->right= new node(5);
    root->right->left= new node(6);
    root->right->right= new node(7);
    root->right->right->left= new node(8);
    root->right->right->right= new node(9);
    cout<<"\nTree in Inorder\n";
    printInorder(root);
    cout<<"\nTree in Preorder\n";
    printPreorder(root);
    cout<<"\nTree in Postorder\n";
    printPostorder(root);
    return 0;
}