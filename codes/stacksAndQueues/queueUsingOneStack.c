#include<stdio.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int top=-1;


void push(int item)
{
	if(top==MAX-1)
	{
		printf("OVERFLOWS!!\n");
		return;
	}
	else
		stack[++top]=item;
}


int pop()
{
	if(top==-1)
		return -1;
	else return stack[top--];
}


void reverse()
{
	int i=0,j=top;
	for(;i<j;i++,j--)
	{
		int temp=stack[i];
		stack[i]=stack[j];
		stack[j]=temp;
	}
}


int main()
{

	int ch=1;
	while(1)
	{
		printf("1).push\n2).pop\n3).exit\n");
		scanf("%d",&ch);
		int item;
		switch(ch)
		{
			case 1: scanf("%d",&item);
					push(item);
					break;
			case 2: reverse();
					item =pop();
					reverse();
					printf("%d\n",item );
					break;

			case 3: exit(1);
			default : printf("Wro =ng CHhoice \n");
		}

		
	}
}