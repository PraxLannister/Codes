#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX];
int front=0;
int rear=0;
void enqueue(int );
int dequeue();
void traverse();
void show();

int main()
{
	int choice=1;
	while(choice)
	{
		printf("1.enqueue\n2.dequeue\n3.show\n0.exit \n: ");
		scanf("%d",&choice);
		int item;
		switch (choice)
		{
			case 1: 
					scanf("%d",&item);
					enqueue(item);
					show();
					break;
			case 2:
					item=dequeue();
					if(item != -1)
						printf("the deleted element is : %d\n",item);
					show();
					break;
			case 0: exit(0);
					break;

			default : printf("WRONG OPTIOn\n");

		}
	}

	return 0;
}
void enqueue(int item)
{
	if((rear+1)%MAX==front)
	{
		printf("OVERFLOW!!\n");
	}
	else
	{
		rear=(rear+1)%MAX;
		queue[rear]=item;
	}

}

int dequeue()
{
	if(front==rear) 
		{
			printf("UNDERFLOW!!\n");
			return -1;
		}
	else
		front=(front+1)%MAX;
		return queue[front];
}
void show()
{
	if(front==rear)
	{
		printf("EMPTY!!\n");
		return;
	}
	int i=front;
	do
	{
		i=(i+1)%MAX;
		printf("|%d|\n",queue[i] );
		
	} while(i!=rear);
}