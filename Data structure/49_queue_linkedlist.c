#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};
void LinkedlistTraversal(struct Node *ptr)
{
    printf("printing the element of this linked list\n");

    while (ptr != NULL)
    {
        printf("The Elemnet is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("The queue is full");
    }
    else
    {
        n->data = val;
        n->next = NULL;
    }
    if (f == NULL)
    {
        f = r = n;
    }
    else
    {
        r->next = n;
        r = n;
    }
}

int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("The queue is Empty\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{

    enqueue(4);
    enqueue(8);
    enqueue(12);
    enqueue(15);
     
    LinkedlistTraversal(f);

    printf("Dequeue element %d\n", dequeue());
    printf("Dequeue element %d\n", dequeue());
    printf("Dequeue element %d\n", dequeue());
    printf("Dequeue element %d\n", dequeue());

   
    return 0;
}