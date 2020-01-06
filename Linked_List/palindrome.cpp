#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char data;
    Node* next;
};

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }    
}
void printList(Node* ptr) 
{ 
    while (ptr != NULL) { 
        printf("%c->", ptr->data); 
        ptr = ptr->next; 
    } 
    printf("NULL\n"); 
} 
void push(Node* head_ref, char new_data) 
{ 
    Node* new_node = new Node();
    new_node->data = new_data; 
    new_node->next = head_ref; 
    head_ref = new_node; 
} 

void reverse(Node* head){
    Node *p, *q;
    if(head==NULL)
        return;
    p=head;
    q=head->next;
    if(q==NULL)
        return;
    q=reverse(q);
    p->next->next=p;
    p->next=NULL;
    return q;
}



int main(){
    Node* head = NULL; 
    char str[] = "abacaba"; 
    int i; 
  
    for(i = 0; str[i] != '\0'; i++) { 
        push(head, str[i]); 
    } 
    printList(head); 
    return 0;
}