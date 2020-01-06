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

node* delete_node(node* head, int x){
    node *p, *q;
    p=head;
    q=head->next;
    if(p->data==x){
        head=q;
        delete(p);
    }
    else{
        while(q->data!=x){
            p=p->next;
            q=q->next;
        }
        if(q->next==NULL){
            p->next=NULL;
            delete(q);
        }
        else{
            p->next=q->next;
            delete(q);
        }

    }
    return head;
    
}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
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
    head=delete_node(head, 5);
    cout<<"\nElements in linked list after deleting 5\n";
    print(head);
    return 0;
}