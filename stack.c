#include<stdio.h>
#include<stdlib.h>
int top=-1;
int push(int stack[],int n,int num)
{
    if(top==n-1)
    {
       printf("Stack is Full....Overflow condition\n");
       return 1;
    }
    else
    {
        top=top+1;
        stack[top]=num;
        return 0;
    }
}
int isEmpty()
{
    if(top==-1)
      return 1;
    else
       return 0;
}
int pop(int stack[])
{
    int val;
    if( isEmpty())
    {
        printf("Stack is Empty.Underflow condition\n");
    }
    else{
        val=stack[top];
        top=top-1;
        return val;
    }
}
void display(int stack[])
{
    if(top==-1)
    {
        printf("Stack is Empty to Display\n");
    }
    else{
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    }
}
int peek(int stack[])
{
    if(top==-1)
    {
        printf("\n Stack Is Empty");
        return -1;
    }
    else{
        int val=stack[top];
        return val;
    }
}
int main()
{
    int stack[3],num,i,val;
    int option;
    do{
        printf("****MAIN MENU*****\n");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. DISPLAY");
        printf("\n 4. PEEK");
        printf("\n Enter The option:");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            {
                printf("Enter the Number To be pushed:");
                scanf("%d",&num);
                int a=push(stack,3,num);
                if(a==0)
                {
                printf("Pushed Suceesfully!\n");
                }
                break;
            }
            case 2:
            {
                val=pop(stack);
                if(val!=-1)
                {
                    printf("The Value Deleted from the stack!\n");
                }   break;
                
            }
            case 3:
            {
                display(stack);
                break;
            }
            case 4:
            {
                val=peek(stack);
                isEmpty();
                printf("The Peek Value is %d",val);

            }
        }
    }while (option!=5);
    return 0;
}