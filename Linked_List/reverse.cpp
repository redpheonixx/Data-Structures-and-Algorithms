//Problem Link: "https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1"
Node* reverseList(Node *head)
{
  Node *prev=NULL;
  Node *nex=NULL;
  while(head!=NULL){
      nex=head->next;
      head->next=prev;
      prev=head;
      head=nex;
  }
  return prev;
}