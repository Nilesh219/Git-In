#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *Next;
};
void LinkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("The Element : %d\n", ptr->data);
        ptr = ptr->Next;
    } while (ptr != head);
}
//Case 1 delete element at First index
struct Node *DeletionAtFirst(struct Node *head)
{
    struct Node *ptr = head;

    head = head->Next;
    
    free(ptr);
    return head;
}
//Case 2 Delete element At Index 
struct Node * DeletionAtIndex(struct Node *head , int index)
{
    struct Node *p = head;
    struct Node *q = head->Next;

    for(int i = 0; i < index-1; i++)
    {
        p = p->Next;
        q = q->Next;

    }

    p->Next = q->Next;
    free(q);
    return head;

}
//Case 3 delete The element at End Index
struct Node * DeletionAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->Next;

    while(q->Next != NULL)
    {
        p = p->Next;
        q = q->Next;
    }

    p->Next = NULL;
    free(q);
    return head;
}
//Case 4 Delete The Given Index Element value
struct Node * DeletionAtByValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->Next;

    while(q->data != value && q->Next != NULL)
    {
        p = p->Next;
        q = q->Next;
    }

    if (q-> data == value )
    {
        p->Next = q->Next;
        free(q);
    }
    return head;
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
    head->Next = Second;

    Second->data = 14;
    Second->Next = Third;

    Third->data = 28;
    Third->Next = Fourth;

    Fourth->data = 35;
    Fourth->Next = head;

    printf("Circular Linked List Before Deletion \n ");
    LinkedListTraversal(head);

    head = DeletionAtFirst(head);
    //head = DeletionAtIndex(head , 2);
   // head = DeletionAtEnd(head);
      //head = DeletionAtByValue(head , 14);
    printf("Circular Linked List After Deletion\n ");
    LinkedListTraversal(head);

    return 0;
}