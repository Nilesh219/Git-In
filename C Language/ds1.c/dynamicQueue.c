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
    if(q->r == q->size-1)
    {
        printf("Queue is Full can not insert Element\n");

    }
    else
    {
        int val;
        printf("Enter the value = ");
        scanf("%d",&val);

        if(q->f == -1)
        {
            q->f = q->r = 0;
            q->arr[q->r] = val;
        }
        else
        {
            q->r = q->r+1;
            q->arr[q->r] = val;

        }

    }
}
int dequeue(struct queue *q)
{
    int val;
    if(q->r == q->f == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        q->f = q->f++;
        val = q->arr[q->f];
        printf("\n %d Value delete",val);
    }
    return val;
}
int traverselist(struct queue *q)
{
    int i = 0;
    printf("\nQueue Element are: ");
    // while(q->f < q->r)
    // {
        
    //     printf("\t %d ",q->arr[i+1]);
        
    // }
    
    for( i = q->f; i <= q->r; i++)
    {
        printf("\t %d ",q->arr[i]);
    }
}
void exitt()
{
    exit(0);
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

                case 4:
                exitt();
                break;

            }


    }while(c!=0);

    return 0;

}