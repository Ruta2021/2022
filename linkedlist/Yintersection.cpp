#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}
*first=NULL,*second=NULL;
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
void create2 (int A[],int n)
{
  int i;
  struct Node *last,*t;
  second=new Node;
  second->data=A[0];
  second->next=NULL;
  last=second;
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
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    struct Node *p,*q,*r;
    p=head1;
    q=NULL;
    r=NULL;
    struct Node *a,*c,*b;
    a=head2;
    c=NULL;
    b=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head1 =q;
     while(a!=NULL)
    {
        b=c;
        c=a;
        a=a->next;
        c->next=b;
    }
    head2 =c;
  //  struct Node *g=head1;
    struct Node *k=NULL;
    while(head1->data==head2->data)
    {
       k=head1;
   //    k=k->next;
       head1= head1->next;
       head2= head2->next;
    }
 
         printf("%d" " ",k->data);
      //   printf("%d" " ",head2->data);
   
}

int main()
{
    int A[]={4,1,8,4,5};
    create(A,5);
    int B[]={5,6,1,8,4,5};
    create2(B,6);
    display(first);
    display(second);
    intersectPoint(first, second);
    
    return 0;
}