#include <cstdlib>
#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
	struct node *prev;	
}*head=NULL;

struct node * createNode(int item){
	struct node * temp = (struct node *)malloc(sizeof(struct node));
	temp -> data = item;
	temp -> next = NULL;
	temp -> prev = NULL;
	//cout<<"createNode = "<<temp->data<<endl;
	return temp;
}
 void insertAtBeg(int item){
 	//cout<<"\n====\n"<<item<<endl;
 	struct node *temp = createNode(item);
 	if(!head)
 	{
 		head = temp;
 		temp -> prev = head;

 		return ;
 	}
 	temp -> next = head -> prev;
 	temp -> prev = head;
 	head = temp;
 }

void traversal(struct node * temp){
	while(temp)
	{
		cout<<temp->data<<"-> ";
		temp = temp -> nex;t
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{//cout<<n<<endl;
	
		int temp;
		cin>>temp;


	insertAtBeg(temp);
	}
	traversal(head);
	//cout<<head->data;
	

return 0;
}