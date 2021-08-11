#include<stdio.h>
#include<stdlib.h>
void selectionsort(int A[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(A[i]>A[j])
            {
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
}
int main()
{
    int *A,n;
    int i;
    printf("Enter the Size of the array:");
    scanf("%d",&n);
    A=(int *)malloc(n);
    //reading Elements to the array
    for(i=0;i<n;i++)
    {
        printf("Insert %d Element:",i+1);
        scanf("%d",&A[i]);
    }
    //Function calling
    selectionsort(A,n);
    //Printing sorted Array
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}