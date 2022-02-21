#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}
    *first = NULL;
int m = INT_MIN;
int max(struct Node *p)
{
    int x=0;
    if (p == 0)
    {

        printf("%d", m);
    }
    else
    {
        x= max(p->next);
        if(x>p->data)
        {
            printf("%d", x);
        }
        else{
            printf("%d", p->data);
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
        int A[] = {3, 5, 7, 10, 100, 8, 32, 2};
        create(A, 8);
        max(first);

        return 0;
    }