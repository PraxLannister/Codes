/* along one side of road there is a seqence of plots
each plot has diff area
areas are given as array elements a[1] a[2]-----a[n]
you want to buy k acers of land to build a house 
find segment of contigous plot whise total area sum is exactly k*/


#include<iostream>
using namespace std;
int __binary_search(int arr[] ,int n ,int k)
{
	int i=0,j=n-1;
	while(i<=j)
	{
		int m = (i+j)/2;
		if(arr[m]==k)
			return m;
		else if(arr[m]>k)
			j=m-1;
		else
			i=m+1;
	}
	return -1;
}
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
	{
		cin>>arr[i];
	}	





/*	//Method 1 nlogn binarySearch
	int preSum[n+1]={0};
	
	for(int i=1;i<=n;i++)
	{
		preSum[i] = preSum[i-1]+arr[i-1];
	}
	for(int i=0;i<=n;i++)
		cout<<preSum[i]<<" ";
	cout<<endl;
	for(int i=0;i<=n;i++)
	{
		int key = k + preSum[i];
		int j = __binary_search(preSum,n,key);
		if(j!=-1)
			cout<<i<<" "<<j-1<<endl;

	}*/






	//Method 2 Using sliding Window technoquw
	int runningSum=0;
	int j=0;
	for(int i=0;i<n;i++)
	{

		runningSum += arr[i];
		while(runningSum>k)
			runningSum -= arr[j++];
		if(runningSum == k){
			for(int t = j;t<=i;t++)
				cout<<arr[t]<<" + ";
			cout<<"\n------"<<endl;
			runningSum = 0;
			j=i+1;
		}


	}


return 0;
}