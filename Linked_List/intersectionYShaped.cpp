//Problem Statement :"https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1/"

int len(Node *head){
    int count=0;
    while(head!=NULL){
        head=head->next;
        count++;
    }
    return count;
}

int intersectPoint(Node* head1, Node* head2)
{
    int l1=len(head1);
    int l2=len(head2);
    if(l1<l2){
        while(l2!=l1){
            head2=head2->next;
            l2--;
        }
    }
    else{
        while(l1!=l2){
            head1=head1->next;
            l1--;
        }
    }
    while(head1!=head2 && head1!=NULL){
        head2=head2->next;
        head1=head1->next;
    }
    if(head1==NULL)
        return -1;
    else
        return head1->data;
}