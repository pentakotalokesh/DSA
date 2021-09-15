#include<stdio.h>
#include<stdlib.h>
#define n 5
int stack1[n];
int stack2[n];
int top1=-1;
int top2=-1;
int temp=0;
void push1(int Element)
{
   if(top1==n-1)
   {
   	printf("Queue is Full.Overflow Condition\n");
   }
   else
   {
   	top1=top1+1;
   	stack1[top1]=Element;
   }
}
void push2(int data)
{
	if(top1==n-1&&top2==n-1)
	{
       printf("Queue is Full.OverflowCondition\n");
	}
	else
	{
		top2=top2+1;
		stack2[top2]=data;
	}
}
void enqueue(int x)
{
	push1(x);
	temp++;
}
int pop1()
{
	if(top1==-1&&top2==-1)
	{
		printf("Queue is Empty");
	}
	else
		return stack1[top1--];
}
int pop2()
{
	if(top1==-1&&top2==-1)
	{
		printf("Queue is Empty");
	}
	else
		return stack2[top2--];
}
void dequeue()
{
	int i;
	for(i=0;i<temp;i++)
	{
		int a=pop1();
		push2(a);
	}
	/*for(i=0;i<=top2;i++)
	{
	    printf("\n%d",stack2[i]);
	}*/
	int b=pop2();
	temp--;
	for(i=0;i<temp;i++)
	{
		int a=pop2();
		push1(a);
	}
}
void display()
{
	int i;
	for(i=0;i<=top1;i++)
	{
		printf("%d\n",stack1[i]);
	}
}
void main()
{
    int i;
	enqueue(5);
	enqueue(6);
	enqueue(7);
	dequeue();
	display();

}

