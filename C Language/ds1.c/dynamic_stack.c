#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int i;
    int size;
    int top;
    int *arr;
};
// int TraverseList(struct stack *ptr, int val)
// {
//     ptr->top+1;
//     for(ptr->top; ptr->top<ptr->size-1; ptr->top++)
//     {
//         printf("The Element = %d",ptr->top);
        
//     }
//     return ptr->top;
// }
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    
    else
    {
       
        return 0;

    }
    
}

int push(struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("The satck is overflow! cannot push %d to the stack\n",val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        return val;
    }
    
}
int pop(struct stack* ptr)
{
    if (isEmpty(ptr))
    {
       printf("The satck is underflow cannot pop from the stack\n");
       return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->i = 0;
    sp->size = 8;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size*sizeof(int));

    int choice,val;
    while(1)
    {
        printf("Enter choice\n1 = Push Element\n2 = pop Element\n3 = Traversal\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                
                
                for(int i = 0; i<sp->size; i++)
                {
                    printf("push = ");
                    scanf("%d",&val);
                    printf("pushed = %d\n",push(sp, val));
                }
            break;
            case 2:
                printf("poped = %d\n",pop(sp));
            break;
            // case 3:
            //     printf("Traverse List\n");
               
            //     for(sp->i; sp->i<sp->size; sp->i++)
            //     {
            //         printf("The Element = %d",val);
            //     }
            // break;
        }
    }
    // printf("stack has been created successfully\n");
    // printf("The pushed Element is %d\n",push(sp, 5));       
    // printf("The pushed Element is %d\n",push(sp, 10));   
    // printf("The pushed Element is %d\n",push(sp, 15));   
    // printf("The pushed Element is %d\n",push(sp, 20));   
    

    // printf("The Poped Element is %d\n",pop(sp));    
    // printf("The Poped Element is %d",pop(sp));    

    
    // printf("The satck is not full flow\n");
    //  printf("The satck is not full flow\n");

    
    return 0;
}
