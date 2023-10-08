#include<stdio.h>
#include<stdlib.h>
//singly linked list
struct node
{
    int data; 
    struct node* Next;
}*head;

void creatlist(int n)
{
    struct node *newnode, *ptr;
    int data, i;
    head = (struct node*)malloc(sizeof(struct node));
   
    if(head == NULL)
    {
        printf("Unable to allocate memory");
        exit(0);
    }

    printf("Enter the data of node 1: ");
    scanf("%d",&data);
    head->data = data;
    head->Next = NULL;
    ptr = head;
    for(i = 2; i <= n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        if(newnode == NULL)
        {
            printf("Unable to allocate memory");
        }

        printf("Enter the data of node %d: ",i);
        scanf("%d",&data);

        newnode->data = data;
        newnode->Next = NULL;

        ptr->Next = newnode;
        ptr = ptr->Next;

    }

}
void traverselist()
{   
    struct node *ptr;
    ptr = head;
    while(ptr != NULL)
    {
        printf("The Element = %d\n",ptr->data);
        ptr = ptr->Next;
    }


}
int main()
{
    // input the how many nodes want user
    int n;
    printf("Enter Nodes = ");
    scanf("%d",&n);

    creatlist(n);
    traverselist();

    return 0;
}