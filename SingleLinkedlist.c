#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
typedef struct node Node;
Node *CreateNode(){
    return (Node *)malloc(sizeof(Node));
}
void insertfirst(int Element)//Algorithm to Insert Element At FIRST
{
    Node *temp;
    temp=CreateNode();
    temp->data=Element;
    if(head==NULL)
    {
        head=temp;
        head->next=NULL;
    }
    else{
        temp->next=head;
        head=temp;
    }
}
//Algorithm to Add Node at the LAST of List
void insertlast(int Element)
{
    Node *temp,*current,*previous;
    temp=CreateNode();
    temp->data=Element;
    current=head;
    while (current!=NULL)
    {
        previous=current;
        current=current->next;
    }
    if(current==head){
        temp->next=NULL;
        head=temp;
    }
    else{
        previous->next=temp;
        temp->next=current;
    }
    
}
void display(){
    Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d---> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main()
{
    insertfirst(5);
    insertfirst(6);
    insertfirst(7);
    display();
    return 0;
}