int len(Node *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

int getNthFromLast(Node *head, int n)
{
       int l=len(head);
       n=l-n;
       if(n<0)
        return -1;
       while(n>0){
           head=head->next;
           n--;
       }
       return head->data;
}