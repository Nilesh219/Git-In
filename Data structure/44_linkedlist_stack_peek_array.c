#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *Next;
};

struct Node* top = NULL;
void linkedlistTraversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("The element : %d\n",ptr->data);
        ptr = ptr->Next;
    }
}
int isEmpty(struct Node* top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int isFull(struct Node* top)
{
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
struct Node* push(struct Node* top ,int x)
{
    if (isFull(top))
    {
        printf("stack Overflow\n");
    }
    else
    {
        struct Node* n = (struct Node*)malloc(sizeof(struct Node));
        n->data = x;
        n->Next = top;
        top = n;
        return top;
    }
    
}
int pop(struct Node* tp )
{
    if (isEmpty(tp))
    {
        printf("stack underflow\n");
    }
    else
    {
        struct Node* n = tp;
        top = (tp)->Next;
        int x = n->data;
        free(n);
        return x;
    }
    
}
int peek(int pos)
{
    struct Node* ptr = top;

    for (int  i = 0; (i < pos-1 && ptr != NULL); i++)   
    {
        ptr = ptr->Next;

    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
    
    
}
int main()
{
    
    top = push(top, 28);
    top = push(top, 18);
    top = push(top, 15);
    top = push(top, 7);

    linkedlistTraversal(top);
    for (int i = 1; i <= 4; i++)
    {
        printf("Value at position %d is ; %d\n",i,peek(i));

    }
     
    return 0;
}