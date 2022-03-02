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
bool isloop(struct Node *f)
{
  struct Node *p,*q;
  p=q=f;
  do
  {
      /* code */
      p=p->next;
      q=q->next;
      q=q?q->next:q;
  } 
  while (p && q && p!=q);
    {

  if(p==q)
  {
   return 1;
  }
  else
  {


  return 0;
  }

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


       
    
int main()
{
    struct Node *t1 ,*t2;
    int A[] = {10,20,30,40,50};
    create(A, 5);
    t1=first->next->next;
    t2=first->next->next->next->next;
    t1->next=t1;
    printf("%d",isloop(first));
    return 0;
}