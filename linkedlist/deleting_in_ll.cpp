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
    struct Node *last,*t;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
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

void del(int x)
{
   struct Node *p=first;
   struct Node *q=NULL;
   int y=-1;
   if(x==1)
   {
       first=first->next;
       y=p->data;
       delete p;
   }
   else{
       for(int i=0;i<x-1;i++)
       {
           q=p;
           p=p->next;
       }
       if(p)
       {
          q->next=p->next;
           y=p->data;
           delete p;
       }
           
       
       

   }
   
}
int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    //display(first);
    del(4);
    display(first);
}