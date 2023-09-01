#include<stdio.h>
int stack[100],n,choice=0,i,j,top=-1;
void push()
{
    if(top == n-1)
    {
        printf("stack is full\n");
    }
    else
    {
        int val;
        printf("Enter the value = ");
        scanf("%d",&val);

        top = top+1;
        stack[top] = val;
    }
    
}
void Pop()
{
    if(top == -1)
    {
        printf("stack is Empty\n");

    }
    else
    {
        top = top-1;
        
    }
}
void show()
{
    for(i = top; i >= 0; i--)
    {
        printf("%d\n",stack[i]);
    }
}
int main()
{
    printf("Enter the number of element in the stack = ");
    scanf("%d",&n);

    while(choice != 4)
    {
        printf("chose one from below option");
        printf("\n1.push = \n2.Pop = \n3.show = \n4.exit");
        printf("\n Enter your choice \n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
            push();
            break;
            case 2: 
            Pop();
            break;
            case 3: 
            show();
            break;
            case 4: 
            printf("Exit");
            break;
        }
    }
}