#include<stdio.h>
#include<stdlib.h>
struct Node(){
    int data;
    Node* next;
}
Node *merge(Node* head1, Node* head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    Node* head=(Node*)malloc(sizeof(Node));
    Node *t=head;
    Node *t1=head1;
    Node *t2=head2;
    while(t1!=NULL && t2!=NULL){
        if(t1->data < t2->data)
        {
            t->next=t1;
            t1=t1->next;
        }
        else{
            t->next=t2;
            t2=t2->next;
        }
        t=t->next;
    }
    if(t1==NULL) t->next=t2;
    if(t2==NULL) t->next=t1;

    return head->next;
}