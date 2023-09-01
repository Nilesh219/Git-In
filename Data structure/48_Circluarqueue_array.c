#include<stdio.h>
#include<stdlib.h>
struct Circularqueue
{
    int size;
    int f;
    int r;
    int* arr;
};
int isEmpty(struct Circularqueue *q)
{
    if (q->r==q->f)
    {
        return 1;   
    }
    return 0;
    
}
int isFull(struct Circularqueue *q)
{
    if ((q->r+1)%q->size == q->f)
    {
        return 1;
    }
    return 0;    
}

void enqueue(struct Circularqueue *q , int val)
{
    if (isFull(q))
    {
        printf("The queue is overflow");
    }
    else
    {
        q->r = (q->r +1) % q->size;
        q->arr[q->r] = val;
        printf("Enqued is element : %d\n",val);
    }
    
}

int dequeue(struct Circularqueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("The queue is underflow ");  
    }
    else
    {
        q->f = (q->f +1)%q->size;
        a = q->arr[q->f];
    }
    return a;
    
}
    


int main()
{
    struct Circularqueue q;

    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int*)malloc(q.size * sizeof(int));

    enqueue(&q , 12);
    enqueue(&q , 15);
    enqueue(&q , 1);
    printf("Dequeue element %d\n",dequeue(&q));
    printf("Dequeue element %d\n",dequeue(&q));
    printf("Dequeue element %d\n",dequeue(&q));
    enqueue(&q , 16);
    enqueue(&q , 18);
    enqueue(&q , 2);
    
    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }
    if (isFull(&q))
    {
        printf("Queue is full\n");
    }

    return 0;

}

    
    

