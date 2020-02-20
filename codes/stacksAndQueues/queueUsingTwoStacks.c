#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack1[MAX];
int stack2[MAX];
int top1=-1;
int top2=-1;

void push(int*,int*,int );
int pop(int*  ,int*  );
void enqueue(int);
int dequeue();

int main()
{
	int choice=0;
	while(1)
	{
		printf("1.enqueue\n2.dequeue\n0.exit\n");
		scanf("%d",&choice);
		int item;

		switch (choice)
		{
			case 1: 	scanf("%d",&item);
						enqueue(item);
						//	show();
						break;
			case 2:   	item=dequeue();
						if(item!=-1)
							printf("the deleted item is : %d\n",item );
						//show();
						break;

			case 0: exit(0);
			default : printf("The Wrong Choice:\n");

		}

	} 


	return 0;

}

void push(int *stack,int *top,int item)
{
	if((*top)==MAX-1)
		printf("OVERFLOW!!\n");
	else stack[++(*top)]=item;
}

int pop(int *stack,int *top)
{
	if((*top)==-1)
	{
		printf("UNDERFLOW!!\n");
		return -1;
	}
	else 
		return stack[(*top)--];
}

void enqueue(int item)
{
	push(stack1,&top1,item);
}

int dequeue()
{
	if(top2==-1)
	{
		if(top1==-1)
		{
			printf("UNDERFLOW!!\n");
			return -1;
		}
		while(top1!=-1)
		{
			int item =pop(stack1,&top1);
			push(stack2,&top2,item);
		}
	}
	return pop(stack2,&top2);

}