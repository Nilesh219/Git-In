#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traverseList(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("The Element = %d\n",ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertatFirst(struct node *head, int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));

    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return ptr;
}
struct node *insertatindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    
    struct node *p = head; 
    int i = 0;
    while(i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;

}
struct node *insertatend(struct node *head, int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while(p->next != NULL)
    {
        p = p->next;
    }
    
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node *insertatafternode(struct node *head,struct node *prevnode, int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prevnode->next;
    prevnode->next = ptr;
    return head;

}
struct node *Deleteatfirst(struct node *head)
{
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node *Deleteatindex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for(int i = 0; i<index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct node *Deleteatend(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
struct node *Deletebyvalue(struct node *head, int val)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->data !=val && q->next!=NULL)
    {
        p = p->next;
        q = q->next;

    }
    if (q->data == val)
    {
        p->next = q->next;
        free(q);

    }
    return head;
    
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    head->data = 2;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 14;
    third->next = fourth;

    fourth->data = 16;
    fourth->next = NULL;

    traverseList(head);
    printf("\n");
    head = insertatFirst(head,24);
    traverseList(head);
    printf("\n");
    head = insertatindex(head,25,2);
    traverseList(head);
    printf("\n");
    head = insertatend(head,26);
    traverseList(head);
    printf("\n");
    head = insertatafternode(head,third,28);
    traverseList(head);
    printf("\n");
    head = Deleteatfirst(head);
    traverseList(head);
    printf("\n");
    head = Deleteatindex(head,2);
    traverseList(head);
    printf("\n"); 
    head = Deleteatend(head);
    traverseList(head);
    printf("\n");
    head = Deletebyvalue(head,14);
    traverseList(head);
}
