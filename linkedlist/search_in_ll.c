#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}
    *first = NULL;
int K;
struct Node *search(struct Node *p,int K)
{
     while(p!=0)
    {
        if(p->data==K)
        {
            printf("%d",p);
        }
        p=p->next;
    }
   
   
}
//recursive way to search 
// struct Node *search(struct Node *p,int K)
// {
//      if(p==NULL)
//      {
//          return 0;
//      }
//      if(key==p->data)

//      {
//          return p;
//      }
//      else
//      {
//          return search(p->next,k)
//      }
   
   
// }
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
    int A[] = {3, 5, 7, 10, 100, 8, 32, 2};
    create(A, 8);
    search(first,7);
   
    return 0;
}