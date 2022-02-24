#include<stdio.h>
#include<stdlib.h>
struct Node 
{
  int data;
  struct Node *next;
}
*first=NULL;
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
void display(struct Node *p)
{
    while(p!=NULL)
    {
 printf("%d" " ",p->data);
    p=p->next;
    }
   
}
int count(struct Node *p)
{
    int c=0;
    p=first;
    while(p!=NULL)
    {
      c++;
      p=p->next;
    }
    return c;
}

void reverse(struct Node *p)
{
    int *A;
    struct Node *q=p;
    int i=0;
    A=(int *)malloc(sizeof(int)*count(p));
    
   
    while(q!=NULL)
    {
        A[i]==p->data;
        q=q->next;
        i++;
    }
    q=p;i--;
    while(q!=NULL)
    {
        q->data=A[i];
        q=q->next;
        i--;
    }
    
}
void reverse2(struct Node *p)
{
    struct Node *q=NULL,*r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}
void reverse3(struct Node *q,struct Node *p)
{
if(p)
{
    reverse3(p,p->next);
    p->next=q;
}
else{
    first=q;
}
}
int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
   //display(first);
    //reverse(first);
    //display(first);
    reverse3(NULL,first);
    display(first);
    return 0;
}