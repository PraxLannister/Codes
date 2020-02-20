#include <iostream>
using namespace std;
class quickFind
{
	int *id;
	int n;

public:
	//constructor
	quickFind(int n)
	{
		this->n=n;
		id = new int[n];
		for(int i=0;i<n;i++)
			id[i]=i;
	}

	bool find(int i, int j)
	{
		return id[i]==id[j];
	}
	void merge(int i,int j)
	{	
		int pid = id[i];
		int qid = id[j];
		for(int i=0;i<n;i++)
		{
			if(id[i]==pid)
				id[i]=qid;
		}

	}
	void display()
	{
		for(int i=0;i<n;i++)
			cout<<id[i]<<" ";
		cout<<"\n-=-=-=-=-=-=-=-=\n";
	}
	~quickFind()
	{
		delete[] id;
	}
	
};
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
       	freopen("output.txt", "w", stdout);
       	freopen("error.txt", "w", stderr);

	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;
	cin>>n;
	quickFind *obj = new quickFind(n);
	obj->merge(0,1);
	obj->display();
	obj->merge(1,2);
	obj->display();
	obj->merge(3,4);
	obj->display();
	obj->merge(2,4);
	obj->display();
	obj->merge(6,9);
	obj->display();
	obj->merge(8,7);
	obj->display();
	cout<<"\n"<<obj->find(4,5)<<"\n";
	obj->display();



	

return 0;
}