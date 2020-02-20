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
	int data = -1;
	node *temp = head;
	if(!temp){
		cout<<"\nUNDERFLOW!!!!!\n";
		return data;
	}
	data = head->data;
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

void print()
{
		cout<<"\n\n1. Create a linked list.\n"
	  	<<"2. Insert an element at the start of the linked list.\n"	
		<<"3. Insert an element at the end of the linked list.\n"
		<<"4. Insert an element before an existing element whose information is x in a linked list.\n"
		<<"5. Insert an element after an existing element whose information is x in a linked list.\n"
		<<"6. Delete the first element of the linked list.\n"
		<<"7. Delete the last element of the linked list.\n"
		<<"8. Delete the element whose information is x from a linked list.\n"
		<<"9. Display the contents of the linked list.\n"
		<<"0. To exit\n";

}

int main()
{	

	int ch=1,num,ele;
	cout<<"WELCOME !!! CHOOSE ANY OF GIVEN OPTIONS ::\n";
	
	while(ch != 0)
	{
		print();
		cin>>ch;
		switch(ch)
		{
            case 1: cout<<"Congo LL created :\n";
                    break;
			case 2:	cout<<"\nEnter Element : ";
				    cin>>num;	
				    insertAtBeg(num);
				    break;
			case 3:	cout<<"\nEnter Element : ";
				    cin>>num;	
			    	insertAtEnd(num);
				    break;

			case 4:	cout<<"\nEnter Element before which you want to enter : ";
				    cin>>ele;
				    cout<<"\nEnter Element to be inserted : ";
				    cin>>num;
				    insertBefEle(num,ele);
				    break;
            case 5: cout<<"\nEnter Element After which you want to enter : ";
				    cin>>ele;	
                    cout<<"Enter Element to be inserted : ";
				    cin>>num;	
				    insertAfterEle(num,ele);
				    break;
            case 6: num = deleteFirst();
                    if(num != -1)
                        cout<<"\n"<<num<<" Deleted";
				    break;
            case 7:	 num = deleteLast();
                    if(num != -1)
                    cout<<"\n"<<num<<" Deleted";
				    break;
				
            case 8:	cout<<"Enter Element that you want to delete : ";
				    cin>>ele;	
                    num = deleteEle(ele);
                    if(num != -1)
                        cout<<"\n"<<num<<" Deleted :";
                    else
                        cout<<"\nNOT FOUND :\n";
			        break;
            case 9:	display();
				        break;
            case 0: ch ==0;
                        cout<<"\nBYE\n";
                        break;
                        
            default: cout<<"\nWrong option\n";

		}
	}
	

return 0;
}
