#include<iostream>
using namespace std;

int binarySearch(int arr[],int start,int end,int key)
{
	int index=-1;
	int mid;
	while(start<=end)
	{
		mid = start + (end - start)/2;

		if(arr[mid] == key)
			return mid;
		else if (arr[mid] < key)
			end = mid - 1;
		else 
			start = mid + 1;
	}

	return -1;
}
int countArrayRotation(int arr[] , int n)
{
	int lo = 0;
	int hi =  n-1;
	while(lo<=hi)
	{
		if(arr[lo] >arr[hi])
			return lo;
		int mid = lo + (hi -lo)/2;
		int prev = (mid - 1)%n;
		int next = (mid + 1)%n;
		if((arr[mid]>arr[prev]) && (arr[mid]>arr[next]))
			return mid;
		if(arr[lo]>arr[mid])
			lo = mid + 1;
		else
			hi = mid - 1;
	}
	return -1;

}
int main()
{
	#ifndef ONLINE_JUDGE
    	// for getting input from input.txt
    	freopen("input.txt", "r", stdin);
    	// for writing output to output.txt
    	freopen("output.txt", "w", stdout);
	#endif

   	int n,key,index;
   	cin>>n;
   	int arr[n];
   	for(int i=0;i<n;i++)
   		cin>>arr[i];

   	//Time Complexity Calculation Start From Here
   	//After Reading Topic 'Count Array Rotain Count' From mycodeschol
   	int partition=countArrayRotation(arr,n); 
   	//returning rotation count of circular sorted array in log(n) 
 
 	//cout<<partition;
   	cin>>key;
   	if(partition==0)
   		index = binarySearch(arr,0,n-1,key);
   	else{
   		index = binarySearch(arr,0,partition-1,key);
   		if(index == -1)
   			index = binarySearch(arr,partition,n-1,key);
   	}
   	cout<<index;
   	return 0;
}