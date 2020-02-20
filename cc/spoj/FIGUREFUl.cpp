#include<iostream>
#include <map>
#include<cstring>

using namespace std;
int main()
{
	typedef pair<int,int> ii;
	map<ii,string> map;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		ii code;
		string name;
		cin>>code.first>>code.second>>name;
		map[code]=name;
	}
	int k;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		ii code;
		cin>>code.first>>code.second;
		cout<<map[code]<<endl;
	}
	return 0;
}