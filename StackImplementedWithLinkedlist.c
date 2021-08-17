#include<stdio.h>
#include<stdlib.h>
int num;
struct node
{
    int data;
    struct node *next;
}*head;
typedef struct node Node;
Node *CreateNode()
{
    return (Node *)malloc(sizeof(struct node));
}
void push(int num)
{
    Node *temp;
    temp=CreateNode();
    temp->data=num;
    if(head==NULL)
    {
        head=temp;
        head->next=NULL;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
    printf("\nELement is Pushed Succesfull!");
}
void pop()
{
    Node *temp;
    temp=CreateNode();
    if(head==NULL)
    {
        printf("\nStack is Empty");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
        printf("Item is Popped");   
    }
}
void display()
{
    Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d --> ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int choice;
    do{
        printf("\n******MAIN MENU********");
        printf("\n1.PUSH ELEMENT INTO STACK");
        printf("\n2.POP ELEMENT FORM STACK");
        printf("\n3.DISPLAY STACK");
        printf("\n4.EXIT");
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the Element to push:");
            scanf("%d",&num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        }
    }while(choice!=4);
    return 0;
}
//OUTPUT :  
/*
   ******MAIN MENU********
1.PUSH ELEMENT INTO STACK
2.POP ELEMENT FORM STACK
3.DISPLAY STACK
4.EXITEnter Your Choice:1

Enter the Element to push:5

ELement is Pushed Succesfull!******MAIN MENU********
1.PUSH ELEMENT INTO STACK
2.POP ELEMENT FORM STACK
3.DISPLAY STACK
4.EXITEnter Your Choice:4

Choose From Given ChoicesPS C:\Users\Loki\Documents\Workspace> cd "c:\Users\Loki\Documents\Workspace\" ; if ($?) { gcc StackImplementedWithLinkedlist.c -o StackImplementedWithLinkedlist } ; if ($?) { .\StackImplementedWithLinkedlist }

******MAIN MENU********
1.PUSH ELEMENT INTO STACK
2.POP ELEMENT FORM STACK
3.DISPLAY STACK
4.EXIT
Enter Your Choice:1

Enter the Element to push:5

ELement is Pushed Succesfull!
******MAIN MENU********
1.PUSH ELEMENT INTO STACK
2.POP ELEMENT FORM STACK
3.DISPLAY STACK
4.EXIT
Enter Your Choice:3
5 -->
******MAIN MENU********
1.PUSH ELEMENT INTO STACK
2.POP ELEMENT FORM STACK
3.DISPLAY STACK
4.EXIT
Enter Your Choice:1

Enter the Element to push:6

ELement is Pushed Succesfull!
******MAIN MENU********
1.PUSH ELEMENT INTO STACK
2.POP ELEMENT FORM STACK
3.DISPLAY STACK
4.EXIT
Enter Your Choice:1

Enter the Element to push:7

ELement is Pushed Succesfull!
******MAIN MENU********
1.PUSH ELEMENT INTO STACK
2.POP ELEMENT FORM STACK
3.DISPLAY STACK
4.EXIT
Enter Your Choice:1

Enter the Element to push:8

ELement is Pushed Succesfull!
******MAIN MENU********
1.PUSH ELEMENT INTO STACK
2.POP ELEMENT FORM STACK
3.DISPLAY STACK
4.EXIT
Enter Your Choice:1

Enter the Element to push:9

ELement is Pushed Succesfull!
******MAIN MENU********
1.PUSH ELEMENT INTO STACK
2.POP ELEMENT FORM STACK
3.DISPLAY STACK
4.EXIT
Enter Your Choice:3
9 --> 8 --> 7 --> 6 --> 5 -->
******MAIN MENU********
1.PUSH ELEMENT INTO STACK
2.POP ELEMENT FORM STACK
3.DISPLAY STACK
4.EXIT
Enter Your Choice:2
Item is Popped
******MAIN MENU********
1.PUSH ELEMENT INTO STACK
2.POP ELEMENT FORM STACK
3.DISPLAY STACK
4.EXIT
Enter Your Choice:3
8 --> 7 --> 6 --> 5 -->
******MAIN MENU********
1.PUSH ELEMENT INTO STACK
2.POP ELEMENT FORM STACK
3.DISPLAY STACK
4.EXIT
Enter Your Choice:4   */
