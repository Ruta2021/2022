#include<stdio.h>
#include<stdlib.h>
struct Node {
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
    while(p!=0)
    {
        printf("%d" " ",p->data);
        p=p->next;
    }
   
}

bool sorted(struct Node *p)
{
    p=first;
    int x=-32768;
    while(p!=0)
    {
        
        if(p->data<x)
        {
             return 0;
        }
            x=p->data;
            p=p->next;

    }
    return 1;
  
    
}
int main()
{
    int A[]={1,2,4,5,0};
    create(A,5);
 //   display(first);
    
    printf("%d \n",sorted(first));
    return 0;
}