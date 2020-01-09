#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *right, *left;
    node(int x){
        data=x;
        left=right=NULL;
    }
};

int height(node *root){
    if(root==NULL)
        return 0;
    int l= height(root->left);
    int r= height(root->right);
    if (l>r)
        return l+1;
    else return r+1;
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
    cout<<"\nHeight of tree\n";
    cout<<height(root);
    return 0;
}