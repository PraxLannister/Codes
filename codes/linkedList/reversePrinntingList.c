#include<stdlib.h>
#include<stdio.h>

//Self Referential Linked List Structure's Prototype
struct node
{
	int data;
	struct node *link;
}*head;
//insertion
void insertAtEnd(int item,struct node *temp)
{
	//creation of new node
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=item;
	new->link=NULL;
	//inserting new node at end
	if(temp==NULL)
		head=new;
	else
	{
		while(temp->link)
			temp=temp->link;
		temp->link=new;

	}


}

//traversing 
void printList(struct node * temp)
{
	while(temp)
	{
		printf("-%d-",temp->data );
		temp=temp->link;
	}
}
void reverseprintList(struct node *temp)
{
	if(temp==NULL) return;
	else
	{
		reverseprintList(temp->link);
		printf("~%d~",temp->data );
	}
}

int main()
{
	int n;
	printf("no of numbers in ll : \n");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		int item;
		scanf("%d",&item);
		insertAtEnd(item,head);
	}
	printList(head);
	printf("\n\n");
	reverseprintList(head);


	return 0;
}