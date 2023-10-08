#include<stdio.h>
#include<stdlib.h>
#define size 5
int r = -1;
int f = -1;
int queue[size];
void exitt();

int enqueue()
{
    int val;
    if(f == (1+r)%size)
    {
        printf("The queue is full");
    }
    else
    {
        printf("Enter the value = ");
        scanf("%d",&val);
        if(f == -1)
        {
            f = r = 0;
            queue[r] = val;
        }
        else
        {
            r = (r+1)%size;
            queue[r] = val;
        }
    }
}
void dequeue()
{
    int val;
    if(f == -1)
    {
        printf("The queue is empty ");
    }
    else
    {
        val = queue[f];
        printf("\n%d value delted\n",val);
        if(f == r)
        {
            f = r = -1;
        }
        else
        {
            f = (f+1)%size;
        }
    }
}
void traverslist()
{
    if(r > f || r == f)
    {
        printf("\n\t Queeu Element are: ");
        for(int i = f; i <= r; i++)
        {
            printf("\t%d",queue[i]);
        }
        
        }
        else
        {
            for(int i = f; i<size; i++)
            {
                printf("\t%d",queue[i]);
            }
            for(int i = 0; i<r; i++)
            {
                printf("\t%d",queue[i]);
            }
    }
}
void exitt()
{
    exit(0);
}
int main()
{

    int choice, c;
    do{
            printf("\nEnter choice = \n1 enqueue = \n2 dequeue = \n3 traverselist = \n4 exit = \n");

            scanf("%d",&choice);
            switch(choice)
            {
                case 1: 
                enqueue();
                break;

                case 2:
                dequeue();
                break;

                case 3:
                traverslist();
                break;

                case 4:
                exitt();
                break;

            }


    }while(c!=0);

    return 0;
}