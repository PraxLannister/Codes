#include<stdio.h>
#include <stdlib.h>
#define MAX 10

int stack[MAX];
int top=(-1);
void show();

void push(int );
int pop();

int main()
{
	int choice=1,item;
	while(choice)
	{
		printf("\n--------------------\n1.Push\n2.Pop\n0.exit");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:	scanf("%d",&item);
					push(item);
					show();
					break;
			case 2: item=pop();
					if(item==-1) break;
					printf("The deleted el is %d :\n",item );
					show();
					break;

			case 0: exit(0);
					break;
			default : printf("Enter correct choice: \n");
		}
	}

	return 0;
}
void push(int item)
{
	if(top==(MAX-1))
		printf("OVERFLOW!!!!\n");
	else
		stack[++top]=item;
}

int pop()
{
	if(top==-1)
		{
			printf("UNDERFLOW!!!!\n");
			return -1;
		}
	else
		return stack[top--];
}
void show()
{
	int i;
	for(i=0;i<=top;i++)
		printf("%d-",stack[i] );
	printf("\n");
}