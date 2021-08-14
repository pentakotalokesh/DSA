#include<stdio.h>
#include<stdlib.h>
int n,Element,place;
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
void insertAfter(int Element,int place)
{
    Node *temp,*current;
    temp=CreateNode();
    int i;
    current = head;
    for(i=0;i<place;i++){
        if(current==NULL)
        {
            printf("Node Doesn't Exist\n");
            return;
        }
        current=current->next;

    }
if(current==NULL)
{
  printf("Node Doesn't Exist\n");
  return;
}
temp->data=Element;
temp->next=current->next;
current->next=temp;
}
void removeFirst(){
    Node *temp;
    if(head!=NULL)
    {
        temp=head;
        head=temp->next;
        free(temp);
    }
    else{
        printf("List is Empty\n");
    }
}
void removeLast(){
    Node *current,*previous;
    current=head;
    if(current!=NULL)
    {
        while(current->next!=NULL){
             previous=current;
             current=current->next;
        }
        if(current=head){
            head=current->next;
        }
        else{
            previous->next=current->next;
        }
        free(current);
    }
    else{
        printf("List is Empty\n");
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
    int num,option,location;
    printf("$$MAIN MENU$$");
    do
    {
        printf("\n1 .INSERTION OF NODE");
        printf("\n2 .REMOVING OF NODE");
        printf("\n3 .DISPLAY LIST");
        printf("\n4 .EXIT");
        printf("\nChoose Option:");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            do{
                printf("\n 1. Insert Node AT First");
                printf("\n 2. Insert Node AT Prefered Location");
                printf("\n 3. Insert Node AT Last");
                printf("\n 4. Back");
            printf("\nChoose Option:");
            scanf("%d",&n);
            switch(n)
            {
                case 1:
                  printf("\nEnter the Data:");
                  scanf("%d",&Element);
                  insertfirst(Element);
                  break;
                case 2:
                  printf("\nEnter the Data:");
                  scanf("%d",&Element);
                  printf("Enter the position:");
                  scanf("%d",&place);
                  insertAfter(Element,place);
                  break;
                case 3:
                  printf("Enter the Data:");
                  scanf("%d",&Element);
                  insertlast(Element);
                  break;
            }
            }while (n!=4);   
        break;
        case 2:
          do{
              printf("\n1.Remove FirstNode:");
              printf("\n2.Remove Last Node:");
              printf("\n3.Back");
              printf("\nChoose Option:");
              scanf("%d",&n);
              switch(n)
              {
                  case 1:
                  removeFirst();
                  break;
                  case 2:
                  removeLast();
                  break;
              }
          }while(n!=3);
        case 3:
        display();
        break;
        default:
        printf("Choose Given options Only");
            break;  
        }
    } while (option!=4);

    
    return 0;
}