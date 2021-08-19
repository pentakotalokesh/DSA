//Queue Graphical representation 
/*
                # # # # # # # # # # #
                      #       #
   --->Front          #       #         ---->Rear Part
                # # # # # # # # # # #
Inserting Element Done From Rear Part
Deletion of Element Done From Front part of queue
*/
#include<stdio.h>
#include<stdlib.h>
#define size 5
int front=0;
int rear=-1;
void insert(int queue[],int num)
{
    if(rear==size-1)
    {
        printf("\n Queue is Full.overflow condition");
    }
    else
    {
        rear=rear+1;
        queue[rear]=num;
         printf("\n Inserted Sucessfully");
    }
   
}
void Delete(int queue[])
{
    if(rear==-1)
    {
        printf("\n Queue is Empty.underflow Condition");
    }
    else
    {
        queue[front]=0;
        front=front+1;
        printf("\n Deletion Sucessfull");
    }
}
void Display(int queue[])
{
    for(int i=0;i<size;i++)
    {   if(queue[i]!=0)
         printf("%d | ",queue[i]);
    }
}
int main()
{
    static int queue[size],choice;
    int num;
    do{
        printf("\n*****MAIN MENU*****");
        printf("\n1. Insert Element to Queue");
        printf("\n2. Delete Element From Queue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\n Enter Your Choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the Number You Want to Insert:");
            scanf("%d",&num);
            insert(queue,num);
            break;
        case 2:
            Delete(queue);
            break;
        case 3:
           Display(queue);
        }
        }while (choice!=4);
return 0;
}
