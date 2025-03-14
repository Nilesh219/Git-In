#include<stdio.h>
#include<stdlib.h>
#define MYTYPE int
class Stack
{
	private:
	MYTYPE *stack;    	// array used to store stack data
	int top;		// stack top - data stored and retrieved from here
	int stack_size;  	// total space available for stack
	public:
	Stack();
	Stack(int size);
	~Stack();
	int push(int data);    
 	int pop();
	public:




	
};
 
int main()
{
	int choice=1;
	int data;
	int status;
	int stack_val;
	Stack s();
	
	while(choice > 0 )
	{
		printf("Enter choice 1: push , 2: pop , 0: exit\n");
		scanf("%d", &choice);
		if(choice == 1)
		{
			printf("Enter data tp push\n");
			scanf("%d",&data);

			//printf( " pushing data .. top = %d  data = %d\n",top,data);
			//printf("Address of Stack array = %x\n",(unsigned int)stack);

			//printf("value is stack array before %d %d \n",stack[0],stack[1]);

			status = s.push(data);
			
			//printf("value is stack array after %d %d \n",stack[0],stack[1]);

			if(status)
				printf("data pushed\n");
			else
				printf("data could not pushed\n");
		}
		if(choice == 2)
		{
			

			
			data = s.pop();
			
			printf( " Poped data = %d\n",data);

			/*if(status)
				printf("data poped \n");
			else
				printf("data could not pop\n");*/
		}
		
	}



	return(0);
}

Stack :: Stack(int size)
{
	stack= (int*)malloc(size*sizeof(int));
	top = 0;
	stack_size = size;
}
Stack :: Stack()
{
	stack= (int*)malloc(5*sizeof(int));
	top = 0;
	stack_size = 5;
}

Stack :: ~Stack()
{
	free(stack);
}

int Stack:: push(int data)
{
	if(top < stack_size)
	{
		stack[top] = data;
		top++;
		return(1);
	}
	return(0);
}
int Stack::pop()
{
	int retData;
	if(top != 0) 
	{
		retData = stack[top];
		top--;
		return(retData);
	}
	
}




