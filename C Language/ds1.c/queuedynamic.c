#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *rear = NULL;
struct node *front = NULL;

// enqueue
void enqueue()
{
    struct node * ptr = (struct node*)malloc(sizeof(struct node));
    int data;
    printf("Enter data = ");
    scanf("%d",&data);

    ptr -> data = data;
    ptr -> next = NULL;
    if(ptr == NULL)
    {
        printf("Queue is Full\n");
    }
    else
    {
        if(front == NULL)
        {
            rear = front = ptr;
        }
        else
        {
            rear -> next = ptr;
            rear = ptr;
        }
    }
}

// dequeue
void dequeue()
{
    int val = -1;
    struct node *ptr = front;
    if(rear == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        front = front->next;            
        int val = ptr->data;
        free(ptr);
        printf("Dequeue = %d\n",val); 
    }
}
void show()
{
    struct node *ptr = front;
    while(ptr != NULL)
    {
        printf("Elenemt = %d \n",ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    

    enqueue();
    enqueue();
    enqueue();
    dequeue();
    show();
    return 0;
}