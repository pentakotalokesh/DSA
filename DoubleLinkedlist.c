#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
}*head;
typedef struct node Node;
Node *CreateNode()
{
    return (Node *)malloc(sizeof(Node));
}
//Algorithm to insert Element at First
void insertfirst(int Element)
{
    Node *temp;
    temp=CreateNode();
    temp->data=Element;
    if(head==NULL)
    {
        temp->prev=NULL;
        head=temp;
        temp->next=NULL;
    }
    else{
        temp->prev=NULL;
        temp->next=head;
        head=temp;
    }
}
void insertlast(int Element)
{
    Node *temp,*ptr;
    temp=CreateNode();
    temp->data=Element;
    ptr=head;
    if(head==NULL)
    {
         temp->prev=NULL;
         head=temp;
         temp->next=NULL;
    }
    else{
        while(ptr->next!=NULL)
        {
              ptr=ptr->next;
        }
        ptr->next=temp;
        temp->prev=ptr;
    }
}
void deletefirst()
{
    Node *temp;
    temp=head;
    if(head=NULL)
    {
        printf("Doubly list is Empty");
    }
    else{
        head=temp->next;
        head->prev=NULL;
        free(temp);
    }
}
void display()
{
    Node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d-->",ptr->data);
        ptr=ptr->next;
    }
}
void main(){
    insertfirst(5);
    insertfirst(6);
    insertfirst(7);
    insertlast(4);
    display();
    deletefirst();
    printf("\n");
    display();
    
}