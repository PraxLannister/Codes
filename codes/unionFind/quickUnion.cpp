#include <iostream>
using namespace std;
class quickUnion
{

	int *id;
	int n;

	int root(int i)
	{
		while(i!=id[i])
			i=id[i];
		return i;
	}
public:
	quickUnion(int n)
	{
		this->n=n;
		id = new int[n];
		for(int i=0;i<n;i++)
			id[i]=i;
	}

	void merge(int i, int j)
	{
		int pid = root(i);
		int qid = root(j);
		id[pid]=qid;
	}
	bool find(int i, int j)
	{
		int pid = root(i);
		int qid = root(j);
		return pid == qid;
	}
		void display()
		{
			for(int i=0;i<n;i++)
				cout<<id[i]<<" ";
			cout<<"\n-=-=-=-=-=-=-=-=\n";

		}
		~quickUnion(){	delete[] id;}
		
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
		quickUnion *obj = new quickUnion(n);
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