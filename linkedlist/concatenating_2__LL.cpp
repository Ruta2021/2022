#include<stdio.h>
#include<stdlib.h>
struct Node 
{
  int data;
  struct Node *next;
}
*first=NULL,*second=NULL,*third=NULL;
void create(int A[],int n)
{
   int i;
   struct Node *last,*t;
   first=new Node;
   first->data=A[0];
   first->next=NULL;
   last=first;
   for(i=1;i<n;i++)
   {
       t=new Node;
       t->data=A[i];
       t->next=NULL;
       last->next=t;
       last=t;
   }
}
void create2(int A[],int n)
{
   int i;
   struct Node *last,*t;
   second=new Node;
   second->data=A[0];
   second->next=NULL;
   last=second;
   for(i=1;i<n;i++)
   {
       t=new Node;
       t->data=A[i];
       t->next=NULL;
       last->next=t;
       last=t;
   }
}
void display(struct Node *p)
{
    while(p!=NULL)
    {
 printf("%d" " ",p->data);
    p=p->next;
    }
    printf("\n");
   
}



void concat(struct Node *p,struct Node *q)
{
   third=p;
   while(p->next!=NULL)
   {
       p=p->next;
   }
   p->next=q;
}
int main()
{
    int A[]={1,2,3,4,5};
    int B[]={6,7,8};
    create(A,5);
    create2(B,3);
    display(first);
    display(second);
    concat(first,second);
    display(third);
    return 0;
}