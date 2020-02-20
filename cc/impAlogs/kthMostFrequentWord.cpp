#include<bits/stdc++.h>
using namespace std;

struct myCompare
{
	bool operator()(pair<string,int> &p1,pair<string,int>p2)
	{
		if(p1.second == p2.second)
			return p1.first>p2.first;
		return p1.second<p2.second;

	}
	
};

int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	cin>>n;
	string str;
	string arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>str;
		arr[i]=str;
	}
	int k;
	cin>>k;
	unordered_map<string,int> mp;
	for(int i=0;i<n;i++)
		mp[arr[i]]++;

	vector<pair<string,int>> v(mp.begin(),mp.end());

	priority_queue<pair<string,int>,vector<pair<string,int>>, myCompare>pq(v.begin(), v.end());

	for(int i=0;i<k;i++)
	{
		pair<string,int> p;
		p=pq.top();
		cout<<p.first<<" "<<p.second<<endl;
		pq.pop();
	}

	

return 0;
}