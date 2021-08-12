#include<stdio.h>
#include<stdlib.h>
struct linkedlist{
    int data;
    struct linkedlist *next;
};
 typedef struct linkedlist *node;
 int main()
 {
     node p1,p2,p3;
     p1=(node)malloc(sizeof(struct linkedlist));
     p2=(node)malloc(sizeof(struct linkedlist));
     p3=(node)malloc(sizeof(struct linkedlist));
     p1->data=1;
     p1->next=p2;
     p2->data=2;
     p2->next=p3;
     p3->data=3;
     p3->next=NULL;
     printf("The data Part:%d\n",p1->data);
     printf("The Adress part:%d\n",p1->next);
     printf("The data Part of Second Node:%d\n",p2->data);
     printf("The Adress part of Second Part:%d\n",p2->next);
     printf("The data Part of Second Node:%d\n",p3->data);
     printf("The Adress part of Second Part:%d\n",p3->next);
     return 0;
 }