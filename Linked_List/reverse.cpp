#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

node* start(node* head, int x){
    node* new_node= new node();
    new_node->data=x;
    if(head==NULL){
        head= new_node;
    }
    else{
        new_node->next=head;
        head=new_node;
    }
    return head;
}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

node* reverse(node* head){
    node *prev, *cur, *nex;
    prev=NULL;
    cur=head;
    nex=NULL;
    while(cur!=NULL){
        nex=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nex;
    }
    return prev;
}

int main(){
    node* head= NULL;
    head= start(head, 7);
    head= start(head, 6);
    head= start(head, 5);
    head= start(head, 4);
    head= start(head, 3);
    head= start(head, 2);
    head= start(head, 1);
    cout<<"Elements in linked list after insertion\n";
    print(head);
    cout<<"\nElements after reversing the linked list\n";
    reverse(head);
    print(head);
    return 0;
}
