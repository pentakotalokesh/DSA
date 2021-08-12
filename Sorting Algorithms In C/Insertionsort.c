#include<stdio.h>
#include<stdlib.h>
void insertionsort(int A[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        temp=A[i];
        j=i;
        while(j>0&&temp<A[j-1])
        {
            A[j]=A[j-1];
            j=j-1;
        }
        A[j]=temp;
    }
}
void main()
{
    int *A,n,i;
    printf("Enter the size of the Array:");
    scanf("%d",&n);
    A=(int *)malloc(n);
    //Rading An Array
    for(i=0;i<n;i++){
        printf("Insert %d Element:",i+1);
        scanf("%d",&A[i]);
    }
    //Function calling
    insertionsort(A,n);
    printf("The Sorted Array is :\n");
    //Printing Sorted Array
    for(i=0;i<n;i++){
        printf("%d\n",A[i]);
    }
}