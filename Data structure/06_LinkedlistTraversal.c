#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *Next;
};
void LinkedListTraversal(struct Node *ptr)
{
    


    
    while(ptr != NULL)
    {
        printf("The Element : %d\n ",ptr -> data);
        ptr = ptr -> Next;
    }
}
int main()
{
    struct Node *Head;
    struct Node *Second;
    struct Node *Third;
    struct Node *Fourth;


    Head = (struct Node*)malloc(sizeof(struct Node));
    Second = (struct Node*)malloc(sizeof(struct Node));
    Third = (struct Node*)malloc(sizeof(struct Node));
    Fourth = (struct Node*)malloc(sizeof(struct Node));

    int data;
    printf("Enter data = ");
    scanf("%d",&data);

    Head -> data = data;
    Head -> Next = Second;

   
    Second -> data = 25 ;
    Second -> Next = Third;

   
    Third -> data = 26;
    Third -> Next = Fourth;

   
    Fourth -> data = 27;
    Fourth -> Next = NULL;


    LinkedListTraversal(Head);


    return 0;
}