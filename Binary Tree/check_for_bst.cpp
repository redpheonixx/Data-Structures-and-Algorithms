//Problem Link: "https://practice.geeksforgeeks.org/problems/check-for-bst/1"
void inorder(Node *root, vector<int>&v){
    if(root==NULL)
        return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

bool isBST(Node* root) {
    if(root==NULL)
        return 1;
    vector<int>v;
    inorder(root, v);
    int flag=1;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            flag=0;
            //cout<<i;
            break;
        }
    }
    return flag;
}