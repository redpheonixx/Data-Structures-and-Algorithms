//Problem Link:"https://practice.geeksforgeeks.org/problems/maximum-path-sum/1"
int go(struct Node *root, int &sum){
    if(root==NULL)
        return 0;
    int left=go(root->left, sum);
    int right=go(root->right, sum);
    sum=max(sum, left+right+root->data);
    return max(left, right)+root->data;
}

int maxPathSum(struct Node *root)
{
    if(root==NULL)
        return 0;
    int sum=0;
    int ans=go(root, sum);
    return sum;
}