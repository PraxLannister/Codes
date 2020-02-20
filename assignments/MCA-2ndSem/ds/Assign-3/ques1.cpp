
//	Author
/*WAP to implement Linked List.
a. Create a linked list.
b. Insert an element at the start of the linked list.
c. Insert an element at the end of the linked list.
d. Insert an element before an existing element whose information is x in a linked list.
e. Insert an element after an existing element whose information is x in a linked list.
f. Delete the first element of the linked list.
g. Delete the last element of the linked list.
h. Delete the element whose information is x from a linked list.
i. Display the contents of the linked list.
*/


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

//c. Insert an element at the end of the linked list.

void insertAtEnd(int data)
{
	node *newNode = createNode(data);
	if(!head)
		head = newNode;
	else
	{
		node *temp = head;
		while(temp->next)
			temp = temp->next;
		temp->next=newNode;
	}
}
//d. Insert an element before an existing element whose information is x in a linked list.

void insertBefEle(int data,int ele)
{
	node *temp = head;
	//if empty
	if(!temp){
		cout<<"\nEMPTY LL::::\n";
		return ;
	}
	//if ele at first node 
	if(temp->data==ele){
			insertAtBeg(data);
			return;
	}
	while(temp->next && temp->next->data != ele )
		temp = temp-> next;
	//if ele found and ofcourse end is not reached
	if(temp->next){
		node *newNode  = createNode(data);
		newNode->next = temp ->next;
		temp->next = newNode;
		return;
	}
	//if not found and reached end
	else
		cout<<"Not Found!!\n";
}
//e. Insert an element after an existing element whose information is x in a linked list.

void insertAfterEle(int data, int ele)
{
	node *temp = head;
	if(!temp)
	{
		cout<<"\nEMPTY!!!\n";
		return;
	}
	while(temp && temp->data!=ele)
		temp = temp->next;
	if(temp)
	{
		node *newNode = createNode(data);
		newNode->next = temp->next;
		temp->next=newNode;
		return;
	}
	cout<<"\nNOT Found !!!\n";
}
//f. Delete the first element of the linked list.
int deleteFirst()
{
	node *temp = head;
	if(!temp){
		cout<<"\nUNDERFLOW!!!!!\n";
		return -1;
	}
	int data = head->data;
	head = head -> next;
	delete(temp);
	return data;
}
//g. Delete the last element of the linked list.

int deleteLast()
{

	int data= -1;
	node *temp = head;
	if(!temp){
		cout<<"\nUNDERFLOW!!!!!\n";
		return -1;
	}
	if(!temp->next)
		data = deleteFirst();
	while(temp->next->next)
		temp = temp->next;
	data = temp->next->data;
	node * temp2 = temp->next;
	temp->next = NULL;
	delete(temp2);
	return data;
}

//h. Delete the element whose information is x from a linked list.
int deleteEle(int ele)
{
	node *temp = head;
	int data = -1;
	if(!temp){
		cout<<"\nUNDERFLOW!!!!!\n";
		return -1;
	}
	if(temp->data == ele){
		data = deleteFirst();
	}
	while(temp->next && temp->next->data!=ele)
		temp = temp->next;
	if(temp)
	{
		node *temp2= temp->next;
		data = temp->next->data;
		temp->next=temp2->next;
		delete(temp2);
		return data;
	}
	return data;

}
//i. Display the contents of the linked list.
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
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


return 0;
}