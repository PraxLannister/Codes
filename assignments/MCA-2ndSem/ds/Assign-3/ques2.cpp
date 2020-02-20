/*WAP to find the length of the Linked List using recursion*/
#include<iostream>
#include<iomanip>
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
int length()
{
	node * temp = head;
	int count=0;
	while(temp)
	{
		count++;
		temp = temp->next;
	}
	return count;
}
int main()
{
/*	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif*/

    	int n;
	cout<<"enter element and enter -1ntp stop;\n";
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		insertAtBeg(n);
	}
	cout<<"the Length is : \n";
	cout<<length();

	

return 0;
}