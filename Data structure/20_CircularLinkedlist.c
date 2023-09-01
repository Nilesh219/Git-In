#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
};

/*void LinkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    printf("The Element : %d\n",ptr->data);
    ptr = ptr->Next;
    while(ptr != head)
    {
        printf("The Element : %d\n",ptr->data);
        ptr = ptr->Next;

    }
}*/
void LinkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("The Element : %d\n", ptr->data);
        ptr = ptr->Next;
    } while (ptr != head);
}
struct Node * insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->Next;
    while (p->Next != head)
    {
        p = p->Next;
    }
    // At This Point P Points TO The last of The Circular list

    p->Next = ptr;
    ptr->Next = head;
    head = ptr;
    return head;
}
struct Node * insertAtIndex(struct Node *head , int data , int index)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head;

    int i = 0;
    while(i != index-1)
    {
        p = p->Next;
        i++;
    }

    ptr->Next = p->Next;
    p->Next = ptr;

    return head;
}
struct Node * insertAtEnd(struct Node *head , int data)
{
    struct Node *ptr =(struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head;

    while(p->Next != head)
    {
        p = p->Next;
    }
    p->Next = ptr;
    ptr->Next = head;
    return head;
}
struct Node * insertAtAfter(struct Node *head , struct Node *prevNode , int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->Next = prevNode->Next;
    prevNode->Next  = ptr;
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

    Fourth->data = 35;
    Fourth->Next = head;

    printf("Circular Linked list Before Insertion\n");
    // LinkedListTraversal(head);
    LinkedListTraversal(head);

    //head = insertAtFirst(head,56);
    //head = insertAtFirst(head,25);
    //head = insertAtIndex(head,56,2);
   // head = insertAtEnd(head,56);
   head = insertAtAfter(head,Third,56);
    printf("\nCircular Linked List After Insertion\n");
    LinkedListTraversal(head);

    return 0;
}