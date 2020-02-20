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
	void insertAtEnd(struct node*);
	void traversal(struct node*);
	int deleteFromBegning(struct node *);
	char ch='y';
	int data,choice;
	
	printf("\nDo you want to insert (y/n) :  ");

	scanf("%c",&ch);
	
	
	while(ch=='y')
	{
		//fflush(stdin);
		printf("\nEnter the data : ");
		scanf("%d",&data);
		struct node *new=createNewNode(data);
		printf("\nAt beg(1) or at End(2) : ");
		scanf("%d",&choice);
		if(choice==1)
			insertAtBegning(new);
		if(choice==2)
			insertAtEnd(new);
                printf("\nDo you want to insert (y/n) :  ");
		getchar();
		scanf("%c", &ch);
		
	}
	printf("\n Deletion :");
	ch='y';
	while(ch=='y')
	{
		printf("\n%d has been deleted : \n",deleteFromBegning(head));
		printf("\nEnter y or n");
		getchar();
		scanf("%c",&ch);
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
void insertAtBegning(struct node *new)
{
	if(head==NULL)
	{
		head=new;
	}
	else
	{
		new->next=head;
		head=new;
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

void insertAtEnd(struct node *new)
{
	if(head==NULL)
		head=new;
	else
	{
		struct node *temp=head;
		while(temp->next)
			temp=temp->next;
		temp->next=new;
	}
}
