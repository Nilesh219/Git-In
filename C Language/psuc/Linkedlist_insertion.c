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
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->Next = head;

    return ptr;
}
// Case 2
struct Node *insertAtindex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->Next;
        i++;
    }
    ptr->data = data;
    ptr->Next = p->Next;
    p->Next = ptr;

    return head;
}
// Case 3
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->Next != NULL)
    {
        p = p->Next;
    }
    p->Next = ptr;
    ptr->Next = NULL;
    return head;
}
// case 4
struct Node *insertAtAfter(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

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
    struct Node *Five;

    head = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));
    Fourth = (struct Node *)malloc(sizeof(struct Node));
    Five = (struct Node *)malloc(sizeof(struct Node));

    // int data;
    // printf("Enter the data = \n");
    // scanf("%d",&data);
    // head->data = data;
    // head->Next = Second;

    // scanf("%d",&data);
    // Second->data = data;
    // Second->Next = Third;

    // scanf("%d",&data);
    // Third->data = data;
    // Third->Next = Fourth;

    // scanf("%d",&data);
    // Fourth->data = data;
    // Fourth->Next = NULL;

    // printf("Linked List Before Insertion\n");
    // linkedListTraversal(head);

    // //head = insertAtFirst(head, 56);
    // //head = insertAtindex(head, 56, 2);
    // //head = insertAtEnd(head, 56);
    // head = insertAtAfter(head , Third , 56);
    // printf("\nLinked List After Insertion\n");
    // linkedListTraversal(head);
    int choice, data, p;
    while (1)
    {
        printf("Enter choice\n1 = insert at first");
        printf("\n2 = insert at end");
        printf("\n3 = insert after node");
        printf("\n4 = insert at index");
        printf("\n5 = Traversal");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            printf("Enter data = ");
            scanf("%d", &data);
            head = insertAtFirst(head, data);
            break;
            case 2:
            printf("Enter data = ");
            scanf("%d", &data);
            head = insertAtEnd(head, data);
            break;
            case 3:
            printf("Enter data = ");
            scanf("%d", &data);
            head = insertAtAfter(head, Third, data);
            break;
            case 4:
            printf("Enter data = ");
            scanf("%d", &data);
            printf("Enter index = ");
            scanf("%d", &p);
            head = insertAtindex(head, data, p);
            break;
            case 5:
            linkedListTraversal(head);
            break;
            case 6:
            goto end;
            break;
        }
    }

end:
    return 0;
}