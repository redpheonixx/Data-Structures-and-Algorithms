//Problem Link: "https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1"

int getMiddle(Node *head)
{
   Node *slow=head;
   Node *fast=head;
   if(head==NULL)
        return -1;
   while(fast!=NULL && fast->next!=NULL){
       fast=fast->next->next;
       slow=slow->next;
   }
    return slow->data;
}