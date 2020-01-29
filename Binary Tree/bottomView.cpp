//Problem Link:"https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1"
void verticalOrder(Node *root,int curr, int hd, map<int, pair<int, int>>&mp){
    if(root==NULL)
        return;
    if(mp.find(hd)==mp.end()){
        mp[hd] = make_pair(root -> data, curr); 
    }
    else{
        pair<int,int>temp=mp[hd];
        if(temp.second<=curr){
            mp[hd].second=curr;
            mp[hd].first=root->data;
        }
    }
    //mp[hd].push_back(root->data);
    verticalOrder(root->left, curr+1, hd-1, mp);
    verticalOrder(root->right, curr+1, hd+1, mp);
}

void bottomView(Node *root)
{
    map<int, pair<int, int>> mp;
    verticalOrder(root,0, 0, mp);
    map<int, pair<int, int>>::iterator it;
    for (it=mp.begin(); it!=mp.end(); it++) 
    { 
        cout<<it->second.first<<" ";
    } 
   
}
