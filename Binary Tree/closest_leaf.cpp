#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};
/*
          10
       /     \
     12       13
           /     \
         14       15    
        /   \     /  \
       21   22   23   24
       /\   /\   /\   /\
      1 2  3 4  5 6  7  8
*/

void findLeafDown(Node *x, int &minDis, int l){
    if(x==NULL){
        return;
    }
    if(x->left==NULL && x->right==NULL){
        if(l<minDis)
            minDis=l;
    }
    findLeafDown(x->left, minDis, l+1);
    findLeafDown(x->right, minDis, l+1);
}

int findThroughParent(Node *root, Node *x, int &dis, int l){
    if(root==NULL)
        return -1;
    if(root==x)
        return 0;
    int l=findThroughParent(root->left, x, dis, l+1);
    if(l!=-1){
        int tempDis=99999;
        findLeafDown(root,tempDis,0);
    }
    int r=findThroughParent(root->right, x, dis, l+1);
    if(r!=-1){
        int tempDis=99999;
        findLeafDown(root,tempDis,0);
    }
    return -1;
}
int main(){
    Node *root  = new Node(10); 
    root->left  = new Node(12); 
    root->right = new Node(13); 
  
    root->right->left   = new Node(14); 
    root->right->right  = new Node(15); 
  
    root->right->left->left   = new Node(21); 
    root->right->left->right  = new Node(22); 
    root->right->right->left  = new Node(23); 
    root->right->right->right = new Node(24); 
  
    root->right->left->left->left  = new Node(1); 
    root->right->left->left->right = new Node(2); 
    root->right->left->right->left  = new Node(3); 
    root->right->left->right->right = new Node(4); 
    root->right->right->left->left  = new Node(5); 
    root->right->right->left->right = new Node(6); 
    root->right->right->right->left = new Node(7);
    root->right->right->right->right = new Node(8); 
    
    Node *x = root->right; 

    int minDis=999999;
    findLeafDown(x, minDis, 0);
    cout<<"Closest leaf distance for given node is"<<minDis;
    return 0;
}