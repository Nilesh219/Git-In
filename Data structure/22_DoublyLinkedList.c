#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *Next;
};
void LinkedListTraversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("The Element : %d\n",ptr->data);
        ptr = ptr->Next;
    }
}
int main()
{
    struct Node *head;
    struct Node *Second;
    struct Node *Third;
    struct Node *Fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    Second = (struct Node*)malloc(sizeof(struct Node));
    Third = (struct Node*)malloc(sizeof(struct Node));
    Fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 7;
    head->prev = NULL;
    head->Next = Second;

    Second->data = 14;
    Second->prev = head;
    Second->Next = Third;

    Third->data =28;
    Third->prev = Second;
    Third->Next = Fourth;

    Fourth->data = 35;
    Fourth->prev = Third;
    Fourth->Next = NULL;

    printf("Doubly Linked List Before Insertion\n ");
    LinkedListTraversal(head);
    return 0;
}