void connect(Node *p)
{
    if(p==NULL)
        return;
    queue<Node*>q;
    q.push(p);
    while(q.empty()==false){
        int n=q.size();
        while(n>0){
            Node* curr=q.front();
            q.pop();
            if(n==1)
                curr->nextRight=NULL;
            else
                curr->nextRight=q.front();
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
            n--;
        }
    }
}