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

void Insert(struct Node *p,int pos,int x)
{
    struct Node *t;
    int i;
  
    if(pos==0)
    {
        t=new Node;
        t->data=x;
        if(Head==NULL)
        {
            Head=t;
            Head->next==Head;
        }
        else{
            p=Head;
            while(p->next!=Head)
            
                p=p->next;
            
            p->next=t;
            t->next=Head;
            Head=t;


        }
    }
    else{
        
        for(i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        t=new Node;
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
    
}

int main()
{
  int A[]={1,2,3,4,5,6};
  create(A,5);

  display(Head);
  Insert(Head,0,67);
  display(Head);
   return 0;
}