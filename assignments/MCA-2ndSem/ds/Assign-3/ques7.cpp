/*WAP to reverse a Linked List.*/




#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;
typedef struct node
{
	int data;
	struct node *next;
}node;

node * head=NULL;
//a. Create a linked list.

node * createNode(int data)
{
	node *newNode = new node;
	if(!newNode)
	{
		cout<<"\nOVERFLOW!!!\nTerminating!!!!";
		exit(0);
	}
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
//b. Insert an element at the start of the linked list.
void insertAtBeg(int data)
{
	node *newNode = createNode(data);
	if(!head)
		head = newNode;
	else
	{
		newNode->next = head;
		head = newNode;
	}
}



void display()
{
	node *temp = head;
	while(temp)
	{
		cout<<temp->data<<"->";
		temp = temp -> next;
	}
	cout<<"|\\0|"<<endl;

}
int main(){
	cout<<"Enter element for reversing :"<<endl;
	
}