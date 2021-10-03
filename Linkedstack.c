#include<Stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*Top;
typedef struct node Node;
Node *CreateNode()
{
    return (Node *)malloc(sizeof(Node));
}
void push(int Element)
{
    Node *temp;
    temp=CreateNode();
    temp->data=Element;
    if(Top==NULL)
    {
        Top=temp;
        Top->next=NULL;
    }
    else{
        temp->next=Top;
        Top=temp;
    }
}
void pop()
{
    if(Top==NULL)
    {
        printf("Stack is Empty.Underflow Condition");
    }
    else{
        Node *temp;
        temp=Top;
        Top=temp->next;
        free(temp);
    }
}
void display()
{
    Node *temp;
    temp=Top;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void main()
{
    push(5);
    push(6);
    display();
    pop();
    display();
}