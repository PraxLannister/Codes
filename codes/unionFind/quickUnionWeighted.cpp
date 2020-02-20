#include <iostream>
using namespace std;

class quickUnionWeighted
{

	int *id;
	int n;
	int *size;
//////////////////////////////////////////////////////
	int root(int i)
	{
		while(i!=id[i]){
			i=id[i];
		}
		return i;
	}
//////////////////////////////////////////////////////
public:
/////////////////////////////////////////////////////
	quickUnionWeighted(int n)
	{
		this->n=n;
		id = new int[n];
		size = new int[n];
		for(int i=0;i<n;i++)
			size[i]=1;
		for(int i=0;i<n;i++)
			id[i]=i;
	}
/////////////////////////////////////////////////////
	void merge(int i, int j)
	{
		if(!find(i,j))
		{
			int pid = root(i);
			int qid = root(j);
			
			if(size[pid]>size[qid])
			{
				id[qid] = pid;
				size[pid] += size[qid];
			}
			else
			{
				id[pid] = qid;
				size[qid] += size[pid];
			}
		}
		else cout<<"Already connected \n";
	}
///////////////////////////////////////////////////
	bool find(int i, int j)
	{
		int pid = root(i);
		int qid = root(j);
		return pid == qid;
	}
///////////////////////////////////////////////////
	void display()
	{
		for(int i=0;i<n;i++)
			cout<<i<<" -> "<<id[i]<<" size -> "<<size[i]<<"\n";
		cout<<"\n-=-=-=-=-=-=-=-=\n";

	}
////////////////////////////////////////////////////
	~quickUnionWeighted()
	{	delete[] id;}
		
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
	quickUnionWeighted *obj = new quickUnionWeighted(n);
	obj->merge(0,1);
	obj->display();
	obj->merge(1,2);
	obj->display();
	obj->merge(3,4);
	obj->display();
	obj->merge(2,3);
	obj->display();
	obj->merge(6,9);
	obj->display();
	obj->merge(8,7);
	obj->display();
	obj->merge(3,6);
	obj->display();
	obj->merge(3,2);
	obj->display();
	obj->merge(7,2);
	obj->display();
	obj->merge(3,5);
	obj->display();
	obj->merge(3,2);
	obj->display();
	obj->merge(3,2);
	obj->display();







	

return 0;
}