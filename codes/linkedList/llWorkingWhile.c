#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void main()
{
	struct node* createNewNode(int );
	void insertAtBegning(struct node*);
	void traversal(struct node*);
	char ch='y';
	int data=0;
	printf("\nDo you want to insert (y/n) :  ");
	scanf("%c",&ch);
	fflush(stdin);
	while(ch=='y')
	{
		//fflush(stdin);
		printf("\nEnter the data : ");
		scanf("%d",&data);
		struct node *temp=createNewNode(data);
		insertAtBegning(temp);
		ch = 'n';
                printf("\nDo you want to insert (y/n) :  ");
		getchar();
		scanf("%c", &ch);
		fflush(stdin);


	}
	printf("\nNow Traversing Linked List : ");
	traversal(head);
	printf("\n");
}
struct node* createNewNode(int data)
{
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->next=NULL;
	return new;
}
void insertAtBegning(struct node *temp)
{
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}

void traversal(struct node *temp)
{
	while(temp)
	{
		printf("\n%d",temp->data);
		temp=temp->next;
	}
	
}
