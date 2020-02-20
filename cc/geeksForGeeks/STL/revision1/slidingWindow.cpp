//Find Sum Of SubArr of size k in a given array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	//Method 1
	/*int sum =0;
	for(int i=0;i<k;i++)
		sum += arr[i];
	for(int i=k;i<n;i++)
	{
		cout<<sum<<" ";
		sum += arr[i]-arr[i-k];
	}
	cout<<sum;*/

	//Method 2
/*	if(k<=n)
	{
		int preSum[n]={0};
		preSum[0]=arr[0];
		for(int i=1;i<n;i++)
			preSum[i] = preSum[i-1]+arr[i];
		cout<<	preSum[k-1]<<" ";

		for(int i=k;i<n;i++)
		{
			cout<<preSum[i]-preSum[i-k]<<" ";
			
		}
	}
	else
		cout<<"k>n";
	*/

	

return 0;
}