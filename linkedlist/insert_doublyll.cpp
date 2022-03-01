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

void insert(struct Node *p,int pos,int x)
{
    struct Node *t;
    int i;
    if(pos==0)
    {
        t=new Node;
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else{
        for(i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        t=new Node;
        t->data=x;
        t->prev=p;
        t->next=p->next;
        if(p->next!=NULL)
        {
            p->next->prev=t;
            p->next=t;
        }
    }
}
int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
  //  display(first);
   // length(first);
   insert(first,3,30);
    display(first);
    return 0;
}