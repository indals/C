#include<stdio.h>
int stack[10],choice,n,top,i,value;

void push();
void pop();
void display();

int main()
{
	top=-1;    //initially there is no element in stack
	printf("\n Enter the size of stack: ");
	scanf("%d",&n);
	
	printf("\n stack implementation using a array\n");

	do
	{
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
		printf("\nEnter the choice : ");
		scanf("%d",&choice);
	switch(choice)
 	{
 		case 1:
 		{
 			push();
 			break;
 		}
 		case 2:
 		{
 			pop();
 			break;
		 }
 		case 3:
 		{
 			display();
 			break;
		 }
 		case 4:
 		{
 			break;
 		}
 		default:
 		{
 			printf ("\nInvalid Choice\n");
 		}}}
 		while(choice!=4);
 		return 0;
}

void push()
{
	if(top>=n -1)
	{
		printf("\nStack Overflow\n");
	}
	else
	{
		printf("\nPlease Enter a velue to be pushed: ");
		scanf("%d",&value);
		top++;
		stack[top]=value;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("\nStack is Underflow");
	}
	else
	{
		int temp=stack[top];
		top--;
	//	free(temp);
	}

}

void display()
{
	if(top<=-1)
	{
		printf("\nStack Underflow");
	}
	else
	{
		for(int i=top;i>=0;i--)
		{
			printf("%d ", stack[top]);
		}
	}
}
