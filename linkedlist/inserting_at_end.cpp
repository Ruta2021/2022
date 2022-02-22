#include<stdio.h>
#include<stdlib.h>

//structure to create data type node
struct Node {
    int data;
    struct Node *next;
}
*first=NULL;
struct Node *last=NULL;
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

//inserting at the last
void insertlast(int x)
{
    struct Node *t=new Node;
    
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=last=t;
    }
    else{
        last->next=t;
        last=t;
    }
}
int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 100, 8, 32, 2};
    create(A, 8);
   // display(first);
   // insert(7,67);
    display(first);
    insertlast(3);
    return 0;
}