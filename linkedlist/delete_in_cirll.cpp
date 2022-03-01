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

int del(struct Node *p,int pos)
{
    struct Node *q;
    int i,x;
    if(pos==1)
    {
        while(p->next!=Head)
        p=p->next;
        x=Head->data;
        if(Head==p)
        {
            free(Head);
            Head=NULL;
        }
        else{
            p->next=Head->next;
            free(Head);
            Head=p->next;
        }
    }
    else{
        for(i=0;i<pos-2;i++)
        p=p->next;
        q=p->next;
        p->next=q->next;
        free(q);
    }
    return x;
}
int main()
{
  int A[]={1,2,3,4,5,6};
  create(A,5);
  display(Head);
  del(Head,3);
  display(Head);
   return 0;
}