#include<bits/stdc++.h> 
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	unordered_set<int> us,us2;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		if(us.count(temp))
			us2.insert(temp);
		else
			us.insert(temp);

	}
	set<int> s(us2.begin(), us2.end());


	for(int x : s)
		cout<<x<<" ";
	

return 0;
}