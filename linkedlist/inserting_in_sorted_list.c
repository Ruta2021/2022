#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}
*first=NULL;
void display(struct Node *p)
{
    while(p!=0)
    {
        printf("%d" " ",p->data);
        p=p->next;
    }
}
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void sortedinsert(struct Node *p,int x)
{
    struct Node *t,*q=NULL;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    p=first;
    if(first==NULL)
    {
        first =t;

    }
    else
    {
      while(p!=0 && p->data<x)
      {
          q=p;
          p=p->next;

      }
      if(p==first)
      {
          t->next=first;
          first=t;
      }
      else{
          t->next=q->next;
          q->next=t;
      }
    }
    
}
int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 100, 8, 32, 2};
    create(A, 8);
    sortedinsert(first,9);
    display(first);
    return 0;
}