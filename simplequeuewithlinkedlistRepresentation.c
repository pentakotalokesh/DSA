#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
typedef struct node Node;
Node *createNode()
{
    return (Node *)malloc(sizeof(Node));
}
void insert(int Element)
{
    Node *temp,*current,*previous;
    temp=createNode();
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
    printf("\nInsertion sucessfull");
    
}
void delete(){
    Node *temp;
    if(head!=NULL)
    {
        temp=head;
        head=temp->next;
        free(temp);
        printf("Deletion Sucessfull");
    }
    else{
        printf("List is Empty\n");
    }
}
void display()
{
    Node *temp;
    temp=createNode();
    temp=head;
    while (temp!=NULL)
    {
        printf("%d--> ",temp->data);
        temp=temp->next;
    }
    
}
int main()
{
    int choice,num;
    do{
        printf("\n*****MAIN MENU*****");
        printf("\n1.INSERT ELEMENT");
        printf("\n2.DELETE ELEMENT");
        printf("\n3.DISPLAY");
        printf("\n4.EXIT");
        printf("\nEnter Your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the number:");
            scanf("%d",&num);
            insert(num);
            break;
        case 2:
           delete();
           break;
        case 3:
          display();
        }
    }while (choice!=4);
    return 0;
}