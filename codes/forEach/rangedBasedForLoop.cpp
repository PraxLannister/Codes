#include <unordered_map>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	unordered_map<int,string> umap;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string tempStr;
		cin>>tempStr;
		umap[i]=tempStr;
	}

	for(auto it : umap)
		cout<<it.first<<" -> "<<it.second<<"\n";
	return 0;
}