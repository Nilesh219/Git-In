#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
};


void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("The Element : %d\n ", ptr->data);
        ptr = ptr->Next;
    }
}
// Case 1
struct Node * insertAtFirst(struct Node *head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->Next = head;

    return ptr;
}
//Case 2
struct Node * insertAtindex(struct Node * head , int data, int index)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));

    struct Node * p = head;
    int i =0;

    while (i != index-1)
    {
        p = p->Next;
        i++;
        
    }
    ptr -> data = data;
    ptr->Next = p->Next;
    p->Next = ptr;

    return head;

}
//Case 3
struct Node * insertAtEnd(struct Node * head , int data)
{
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while(p->Next != NULL)
    {
        p = p->Next;
        
    }
    p->Next = ptr;
    ptr->Next = NULL;
    return head;
    
}
//case 4
struct Node * insertAtAfter(struct Node * head , struct Node *prevNode ,int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;

    ptr->Next = prevNode->Next;

    prevNode->Next = ptr;

    return head;
}

int main()
{

    struct Node *head;
    struct Node *Second;
    struct Node *Third;
    struct Node *Fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));
    Fourth = (struct Node *)malloc(sizeof(struct Node));

    
    head->data = 7;
    head->Next = Second;

    Second->data = 14;
    Second->Next = Third;

    Third->data = 28;
    Third->Next = Fourth;

    Fourth->data = 49;
    Fourth->Next = NULL;

    printf("Linked List Before Insertion\n");
    linkedListTraversal(head);

    //head = insertAtFirst(head, 56);
    //head = insertAtindex(head, 56, 2);
    //head = insertAtEnd(head, 56);
    head = insertAtAfter(head , Third , 56);
    printf("\nLinked List After Insertion\n");
    linkedListTraversal(head);

    return 0;
}