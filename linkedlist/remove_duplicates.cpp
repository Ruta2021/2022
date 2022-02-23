#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}
*first=NULL;
void create (int A[],int n)
{
  int i;
  struct Node *last,*t;
  first=new Node;
  first->data=A[0];
  first->next=NULL;
  last=first;
  for(i=1;i<n;i++)
  {
      t=new Node;
      t->data=A[i];
      t->next=NULL;
      last->next=t;
      last=t;
  }
}

void display(struct Node *p)
{
    while(p!=0)
    {
        printf("%d"" " ,p->data);
        p=p->next;
    }
    printf("\n");
    
}

void duplicates(struct Node *first)
{
       struct Node *p=first;
        struct Node *q=p->next;
    while(q!=NULL)
    {
      if(p->data!=q->data)
      {
          p=q;
          q=q->next;
      }
      else{
          p->next=q->next;
          delete q;
          q=p->next;
      }
 
    }
}
int main()
{
    int A[]={1,2,2,4,4};
    create(A,5);
    display(first);
    duplicates(first);
    display(first);
    return 0;
}