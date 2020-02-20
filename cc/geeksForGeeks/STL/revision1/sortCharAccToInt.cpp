#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(pair<int,int> p1, pair<int ,int> p2)
{
	return p1.second<p2.second;
}
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	cin>>n;
	int arr[n];
	char crr[n];
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
		cin>>crr[i];

	vector<pair<int,int>> v;


	for(int i=0;i<n;i++)
	{
		v.push_back({arr[i],crr[i]});
	}
	
	sort(v.begin(),v.end(),comp);
	vector<pair<int,int>> v2(v.begin(), v.end());
	for(int i=0;i<n;i++)
	{
		cout<<v[i].first<<" ";
	}
	cout<<(char)v2.at(1).second;
//	cout<<v2[0];


return 0;
}