//Problem Link:"https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1"
int countLeaves(Node* root)
{
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;
    int l=countLeaves(root->left);
    int r=countLeaves(root->right);
    return l+r;
}