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

void inOrder(node *root, vector<int>&v){
    if(root==NULL)
        return;
    inOrder(root->left, v);
    v.push_back(root->data);
    inOrder(root->right, v);
}

bool isBST(node *root){
    vector<int>v;
    inOrder(root, v);
    cout<<"\nElements in inorder are\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1])
            return 0;
    }
    return 1;
}
int main(){
    node *root= new node(10);
    root->left= new node(7);
    root->right= new node(39);
    root->left->left= new node(5);
    root->left->right= new node(11);
    root->right->left= new node(4);
    root->right->right= new node(40);
    //root->right->right->left= new node(8);
    //root->right->right->right= new node(9);
    int ans=isBST(root);
    if(ans==1)
        cout<<"\n It's a BST";
    else
        cout<<"\n It's not a BST";
    return 0;

}