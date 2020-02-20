#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	std::vector<int> v;
	std::vector<int>::iterator it;
	int n,d,k,temp,key1,key2;
	int count=0;
	cout<<"Ntr n : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	cout<<endl;
	cout<<"Now Sorting "<<endl;
	sort(v.begin(),v.end());
	
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<",";
	
	cout<<endl;
	
	//finding triplets
	
	cout<<"Enter k : ";
	cin>>k;
	for(int i=0;i<v.size();i++)
	{
		int key=v[i];
		cout<<"For Key :"<<key;
		it=find(v.begin()+i,v.end(),key+k);

		if(it!=v.end())
		{
			cout<<" 1st Found :"<<*it;
			//key1=key;
			it=find(it+1,v.end(),*it+k);
			if(it!=v.end()){
				count++;
				cout<<" 2nd Found :"<<*it;
			}
		}
		cout<<endl;

	}

cout<<"Count :: "<<count;
	return 0;
}