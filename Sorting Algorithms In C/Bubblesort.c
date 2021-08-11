#include<stdio.h>
#include<stdlib.h>
void bubblesort(int A[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(A[j]>A[j+1])
            {
               temp=A[j];
               A[j]=A[j+1];
               A[j+1]=temp; 
            }
        }
    }
}
int main()
{
    int *A,n;
    int i;
    printf("Enter the Size Of the Array:");
    scanf("%d",&n);
    A=(int *)malloc(n);
    //Reading the Array
    for(i=0;i<n;i++)
    {
        printf("Insert %d Element:",i+1);
        scanf("%d",&A[i]);
    }
    //Function calling
    bubblesort(A,n);
    //Sorted Array printing
    printf("The sorted Array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
return 0;
}