#include <stdio.h>

void display_stack(int array[5], int *top)
{
    for (int i = 0; i <= *top; i++)
    {
        printf("%d\n", array[i]);
    }
    
}

void push(int array[5], int *top, int element, int size)
{
    if(*top >= (size-1))
    {
        printf("stack is full\n");
    }
    else
    {
        *top += 1;
        array[*top] = element;
    }

}

void pop(int array[5], int *top)
{
    
    if(*top == -1)
    {
        printf("there is no any element to delete in the stack\n");
    }
    else
    {
        printf("the deleted element is %d\n", array[*top]);
        *top = (*top - 1);
    }

}

int main()
{
    int top = -1;
    int *t;
    t = &top;
    int stack[5];
    int size = sizeof(stack)/sizeof(int);
    int deleted_element;

    push(stack, t, 26, size);
    push(stack, t, 13, size);
   /* push(stack, t, 2, size);
    push(stack, t, 6, size); */
    
    printf("after insertion\n");
    display_stack(stack, t);
    
    int temp = top;

    printf("after deletion\n");  
    pop(stack, t);
    display_stack(stack, t);

  //  printf("the deleted element is %d\n", stack[temp]);

    return 0;
}