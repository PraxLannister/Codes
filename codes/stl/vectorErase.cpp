#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
		for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	int range1,range2;
	cin>>range1;
	range1-=1;
	v.erase(v.begin()+range1);
		for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cin>>range1>>range2;
	range1-=1;
	range2-=1;
	v.erase(v.begin()+range1,v.begin()+range2);
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";


	return 0;
}