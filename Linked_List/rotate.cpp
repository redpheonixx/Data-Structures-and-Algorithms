//Problem Link: "https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1"

Node* rotate(Node* head, int k) {
    Node *temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=head;
    Node *end=NULL;
    while(k--){
        end=head;
        head=head->next;
    }
    end->next=NULL;
    return head;
}
