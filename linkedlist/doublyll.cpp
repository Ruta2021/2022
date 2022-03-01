#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}
*first=NULL;

void create(int A[],int n)
{
    struct Node *last, *t;
    int i;

    first=new Node;
    first->data=A[0];
    first->prev=first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }

}

void display(struct Node *p)
{
    while(p)
    {
        printf("%d",p->data);
        p=p->next;
    }
}
int length(struct Node *p)
{
   int l=0;
   while(p)
   {
       l++;
       p=p->next;
   } 
   printf("%d",l);
}
int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
  //  display(first);
    length(first);
    return 0;
}