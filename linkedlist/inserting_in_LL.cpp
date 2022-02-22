#include <stdio.h>
#include <stdlib.h>
//structure to create data type node
struct Node
{
    int data;
    struct Node *next;
}
    *first = NULL;
//creation of LL
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
//display of LL
int cnt=0;
void display(struct Node *p)
{
    while(p!=0)
    {
        printf("%d" " ",p->data);
        cnt++;
        p=p->next;
       
    }
}

//inserting in LL
void insert(int pos,int x)
{
    //if(pos<0 ||pos>cnt)
    //{
    //    printf("invalid");
    //}
    struct Node *t,*p;
    //insertion at the start
    if(pos==0)
    {
        t=new Node;
        t->data=x;
        t->next=first;
        first=t;
    }
    else if(pos>0)
    {
        p=first;
        for(int i=0;i<pos-1 &&p ;i++)
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
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 100, 8, 32, 2};
    create(A, 8);
   // display(first);
    insert(7,67);
    display(first);
    return 0;
}