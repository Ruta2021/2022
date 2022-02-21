#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}
    *first = NULL;
int s=0;
int sum(struct Node *p)
{
    if(p==0)
    {
     return 0;
    }
    else
    {
       return sum(p->next)+p->data;
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
int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    sum(first);
   
    return 0;
}