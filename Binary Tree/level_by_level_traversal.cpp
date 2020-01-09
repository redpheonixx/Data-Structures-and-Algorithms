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

void printLevelByLevel(node *root){
    if(root==NULL)
        return;
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(1){
        node* curr=q.front();
        q.pop();
        if(curr!=NULL){
            cout<<curr->data<<" ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
        else{
            cout<<"\n";
            if(q.empty()) break;
            q.push(NULL);
        }
    }
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
    cout<<"\nprinting level by level of tree\n";
    printLevelByLevel(root);
    return 0;
}