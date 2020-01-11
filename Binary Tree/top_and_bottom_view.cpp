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

void verticalOrder(node *root,int hd, map<int, vector<int>> &v){
    if(root==NULL)
        return;
    v[hd].push_back(root->data);
    verticalOrder(root->left, hd-1, v);
    verticalOrder(root->right,hd+1,v);
}

void bottomView(node *root, map<int, vector<int>> m){
    map<int, vector<int>>:: iterator it;
    for(it=m.begin();it!=m.end();it++){
        vector<int>v;
        v=it->second;
        cout<<v[v.size()-1]<<" ";
    }
}
void topView(node *root, map<int, vector<int>> m){
    map<int, vector<int>>:: iterator it;
    for(it=m.begin();it!=m.end();it++){
        vector<int>v;
        v=it->second;
        cout<<v[0]<<" ";
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
    map<int, vector<int>>v;
    verticalOrder(root,0, v);
    cout<<"\nprinting bottom view of tree\n";
    bottomView(root, v);
    cout<<"\nprinting top view of tree\n";
    topView(root, v);
    return 0;
}