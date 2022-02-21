#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}

void display(struct Node *p)
{
    while(p!=0)
    {
        printf("%d" " ",p->data);
        p=p->next;
    }
}*first=NULL;

void delete(struct Node *p,int index)
{
    struct Node *q;
    int x=-1;

    if(index<1||index>count(p))
    {
        return -1;
    }
    else{
        if(index==1)
        {
            q=first;
            x=first->data;
            first=first->next;

        }
    }
}
int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 100, 8, 32, 2};
    create(A, 8);
    
    display(first);
    return 0;
}