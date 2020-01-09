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

void verticalOrder(node *root, int hd, map<int, vector<int>>&m){
    if(root==NULL)
        return;
    m[hd].push_back(root->data);
    verticalOrder(root->left, hd-1, m);
    verticalOrder(root->right, hd+1, m);
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
    
    map<int, vector<int>>m;
    verticalOrder(root, 0, m);
    map<int, vector<int>>::iterator it;
    for(it=m.begin(); it!=m.end();it++){
        vector<int>v;
        v=it->second;
        cout<<"\n"<<it->first<<"\t\t";
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}