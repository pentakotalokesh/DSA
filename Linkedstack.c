#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack *next;
};
typedef struct stack *node;
node top=NULL;
int push(node top,int value)
{
    node ptr;
    ptr=(node)malloc(sizeof(struct stack));
    ptr->data=value;
   if(top==NULL)
   {
       ptr->next=NULL;
       top=ptr;
   }
   else{
       ptr->next=top;
       top=ptr;
   }
   if(top!=NULL)
   {
   printf("ELEMENT PUSHED SUCESSFULLY\n");
   printf("%d\n",top->data);
   }
   else{
       printf("Element not pushed");
   }
   return top;
} 
int pop(node top)
{
    node ptr;
    ptr=top;
    if(top==NULL)
    {
        printf("STACK IS UNDERFLOW CONDITION");
    }
    else{
        top=top->next;
        free(ptr);
    }
}

int main()
{
    int value;
    printf("Enter the value to be pushed:");
    scanf("%d",&value);
    push(top,value);
    pop(top);
    return 0;
}