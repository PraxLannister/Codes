#include<stdio.h>
#include <stdlib.h>
//structure
struct node
{
	int data;
	struct node *next;
	
}*head=NULL;
//List Of Functions
void traversal()
{
	if (head==NULL)
		return;
	struct node *t=head;
	while(t)
	{
		printf("%d-",t->data );
		t=t->next;
	}
}
void reverseTraversal(struct node *temp)
{
	if(temp == NULL) return;
	else
	{
		reverseTraversal(temp->next);
		printf("%d~",temp->data );
	}
}
struct node* createNode(int item)
{
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->data=item;
	new->next=NULL;
	return new;
}

// func(1)
void insertAtBeg(int item)
{
	struct node *new=createNode(item);
	if(head==NULL)
		head=new;
	else
	{
		new->next=head;
		head=new;
	}
	printf("\nThe New Linked list is: \n");
	traversal();
	printf("\n");
	reverseTraversal(head);
}
// func(2)
void insertAtEnd(int item)
{
	struct node *new=createNode(item);
	struct node *t=head;
	if(t==NULL)
		head=new;
	else
	{
		while(t->next)
			t=t->next;
		t->next=new;
	}
	printf("\nThe New Linked list is: \n");
	traversal();
	printf("\n");
	reverseTraversal(head);

}
void insertAtLoc(int loc, int item)
{
	struct node *new=createNode(item);
	struct node *t=head;
	if(t==NULL) {
		printf("empty\n");
		return;
	}
	while(t->data!=loc) 
	{
		t=t->next;
		if(t==NULL) {
			printf("Not Fund:\n");
			return;
		}
	}
	new->next=t->next;
	t->next=new;
	printf("\nThe New Linked list afer insertion after %d is: \n",loc);
	traversal();
	printf("\n");
	reverseTraversal(head);
}

void deletionFromHead() 
{
	if(head ==NULL)
	{
		printf("List is empty\n");
		return;
	}
	struct node *temp=head;
	head=temp->next;
	free(temp);
	printf("\nThe New Linked list is: \n");
	traversal();
	printf("\n");
	reverseTraversal(head);

}
void deletionFromTail()
{
	//0 element
	if(head ==NULL)
	{
		printf("List is empty\n");
		return;
	}
	struct node *t=head;
	//1 element
	if(t->next==NULL)
	{
		free(t);
		head=NULL;
	printf("\nThe New Linked list is: \n");
	traversal();
	printf("\n");
	reverseTraversal(head);
		return;
	}
	else
	{
		while(t->next->next)
			t=t->next;
		free(t->next);
		t->next=NULL;
	printf("\nThe New Linked list is: \n");
	traversal();
	printf("\n");
	reverseTraversal(head);
	}
}
void deleteParticular(int item)
{
	if(head ==NULL)
	{
		printf("List is empty\n");
		return;
	}
	struct node *t=head;
	if(t->next==NULL)
	{
		if(t->data==item)
		{
			free(t);
			head=NULL;
	printf("\nThe New Linked list is: \n");
	traversal();
	printf("\n");
	reverseTraversal(head);
			return;
		}
		printf("\n1 node only but item not present\n");
		return;
	}
	else
	{
		while(t->next->data!=item)
		{
			if(t->next->next==NULL)
			{
				printf("\nmore than 1 but still item not present\n");
				return;
			}
			t=t->next;

		}
		struct node *temp=t->next;
		t->next=temp->next;
		free(temp);
	printf("\nThe New Linked list is: \n");
	traversal();
	printf("\n");
	reverseTraversal(head);
	}

}
void reveseIterative()
{
	struct node *curr,*prev,*aage;
	curr=head;
	prev=NULL;
	while(curr)
	{
		aage=curr->next;
		curr->next=prev;
		prev=curr;
		curr=aage;
	}
	head=prev;
	traversal();

}
void reverseRecursive(struct node *prev,struct node *curr)
{
	/*if(curr)
	{
	reverseRecursive(curr,curr->next);
	curr->next=prev;
	}
	else
	{
		head=prev;
	}*/
	if(curr)
	{
		head=curr ;
		reverseRecursive(curr,curr->next);
		curr->next=prev;

	}
}



int main()
{
	int item;
	int choice=1;
	
	while(choice)
	{
		printf("\n------------------------------------\n1.insertAtBeg\n2.insertAtEnd\n3.insertAtLoc\n4.reverseRecursive\n5.reverseIterative\n6.deletionFromHead\n7.deletionFromTail\n8.deleteParticular\n0.exit");
		printf("\nEnter Choice: ");
		scanf("%d",&choice);
		int item,loc;
		switch(choice)
		{
			case 1: scanf("%d",&item);
					insertAtBeg(item);
					break;

			case 2: scanf("%d",&item);
					insertAtEnd(item);
					break;
			case 3: scanf("%d %d",&item,&loc);
					insertAtLoc(loc,item);
					break;
			case 4: reverseRecursive(NULL,head);
					traversal();
					break;
			case 5: reveseIterative();
					break;
			case 6: deletionFromHead();
					break;
			case 7: deletionFromTail();
					break;
			case 8: scanf("%d",&item);
					deleteParticular(item);
					break;
			case 0: exit(0);
					break;
			default: printf("Enter Correct Choice\n");

		}
	}


	return 0;
}
