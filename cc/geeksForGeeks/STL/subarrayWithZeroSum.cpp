#include<iostream>
#include <unordered_set>
using namespace std;

int isZeroSum(int arr[],int n)
{
	unordered_set<int> set;
	int prefixSum = 0;
	for(int i=0;i<n;i++)
	{
		prefixSum += arr[i];
		if(set.find(prefixSum)!=set.end())
			return true;
		if(prefixSum == 0)
			return true;
		set.insert(prefixSum);
	}
	return false;
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
	for(int i=0;i<n;i++)
		cin>>arr[i];
	if(isZeroSum(arr,n))
		cout<<"true";
	else
		cout<<"false";
	

return 0;
}