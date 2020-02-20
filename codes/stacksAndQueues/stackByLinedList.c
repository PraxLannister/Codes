#include<stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
	
}*top=NULL;
struct node *createNewNode(int );
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
	struct node *new=createNewNode(item);
	if (new==NULL)
		printf("malloc error : it might be case of OVERFLOW\n");
	else
	{
	new->next=top;
	top=new;
	}
}

int pop()
{
	if(!top)
	{
		printf("UNDERFLOW!!!!\n");
		return -1;
	}
	else 
	{
		int item=top->data;
		struct node *temp=top;
		top=top->next;
		free(temp);
		return item;

	}
	
	
}
void show()
{
	struct node *t=top;
	while(t)
	{
		printf("|%d|\n",t->data );
		t=t->next;
	}
}

struct node *createNewNode(int item)
{
	struct node *new=(struct node *) malloc(sizeof(struct node));
	new ->data=item;
	new->next=NULL;
	return new;
}