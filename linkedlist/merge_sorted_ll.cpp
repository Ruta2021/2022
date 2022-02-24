#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}
    *first = NULL,*second=NULL,*third=NULL;

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
void create2(int A[], int n)
{
    int i;
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next = NULL;
    last = second;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct Node *p)
{
    while(p!=0)
    {
        printf("%d" " ",p->data);
        p=p->next;
    }
   printf("\n");
}
void merge(struct Node *p,struct Node *q)
{
    struct Node *last;
    if(p->data<q->data)
    {
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else{
          third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p&&q)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)
    {
        last->next=p;
    }
    else{
        last->next=q;
    }
}
int main()
{
    struct Node *temp;
    int A[] = {10,30,40,50};
    create(A, 5);
    display(first);
    int B[]={5,15,25,35,45};
    create2(B,5);
    display(second);
    merge(first,second);
    display(third);
    return 0;
}