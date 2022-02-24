#include<stdio.h>
#include<stdlib.H>

struct Node 
{
    int data;
    struct Node *next;
}
*Head;

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    Head=new Node;
    Head->data=A[0];
    Head->next=Head;
    last=Head;

    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;

    }
}
void display(struct Node *h)
{
    do
    {
        /* code */
        printf("%d " "" ,h->data);
        h=h->next;
    } while (h!=Head);
    {
         printf("\n");
    }
    
}

void dis(struct Node *h)
{
    static int flag=0;
    if(h!=Head ||flag==0)
    {
        flag=1;
        printf("%d",h->data);
        dis(h->next);
    }
    flag=0;
}
int main()
{
  int A[]={1,2,3,4,5,6};
  create(A,5);
  dis(Head);
   return 0;
}