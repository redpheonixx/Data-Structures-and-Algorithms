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

node* append(node* head, int x){
    node* new_node=new node();
    new_node->data=x;
    new_node->next=NULL;
    while(head->next!=NULL)
        head=head->next;
    head->next=new_node;
    return head;
}

node* inbetween(node* head, int pos, int x){
    node* new_node= new node();
    node* store_next= new node();
    new_node->data=x;
    int count=1;
    while(count!=pos-1){
        head=head->next;
        count++;
    }
    store_next=head->next;
    head->next=new_node;
    new_node->next= store_next;
    return head;
}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    node* head=NULL;
    head=start(head, 10);
    head=start(head, 12);
    head=start(head, 13);
    append(head, 3);
    inbetween(head, 2, 2);
    print(head);
    return 0;
}