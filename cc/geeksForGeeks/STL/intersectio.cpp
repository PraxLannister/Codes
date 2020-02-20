#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n,m;
	cin>>n>>m;
	unordered_set<int> set;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++)
		cin>>arr1[i];
	for(int i=0;i<m;i++)
		cin>>arr2[i];
	for(int i=0;i<n;i++)
	{
		set.insert(arr1[i]);
	}
	for(int i=0;i<m;i++)
	{
		if(set.find(arr2[i])!=set.end())
			cout<<arr2[i]<<" ";
	}
	

return 0;
}