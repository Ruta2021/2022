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

struct Node *reverse(struct Node *l)
{
    int k=count(first);
    int A[k];
    int i=0;
    struct Node*p=l;
    while(p!=NULL)
    {
        A[i]==p->data;
        p=p->next;
        i++;
    }
    p=l;i--;
    while(p!=NULL)
    {
        p->data=A[i];
        p=p->next;
        i--;
    }
    return l;
}
int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    display(first);
    reverse(first);
    display(first);
    return 0;
}