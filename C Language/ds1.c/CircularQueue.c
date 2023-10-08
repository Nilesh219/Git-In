#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int r; 
    int f;
    int *arr;
};
void enqueue(struct queue *q)
{
    if((q->r+1)%q->size == q->f)
    {
        printf("Queue is full");
    }
    else
    {
        int val;
        printf("Enter the value = ");
        scanf("%d",&val);
        q->r = (q->r+1)% q->size;
        q->arr[q->r] = val;
        printf("The Element = %d\n",val);
    }
}
int dequeue(struct queue *q)
{
    int val = -1;
    if(q->r == q->f == -1)
    {
        printf("Queue is underflow");
    }
    else
    {
        q->f = (q->f+1)%q->size;
        val = q->arr[q->f];
        printf("\n %d Value delete",val);
    }
    return val;
}
int traverselist(struct queue *q)
{
    
     for( int i = q->f; i <= q->r; i++)
    {
        printf("\t %d ",q->arr[i]);
    }
}
int main()
{
    struct queue q;
    q.size = 5;
    q.r = q.f = -1;
    q.arr = (int*)malloc(q.size*sizeof(int));

    int choice, c;
    do{
            printf("\nEnter choice = \n1 enqueue = \n2 dequeue = \n3 traverselist = \n4 exit = \n");

            scanf("%d",&choice);
            switch(choice)
            {
                case 1: 
                enqueue(&q);
                break;

                case 2:
                dequeue(&q);
                break;

                case 3:
                traverselist(&q);
                break;

                // case 4:
                // exitt();
                // break;

            }


    }while(c!=0);

    return 0;

}