#include <iostream>
using namespace std;

int firstOccurence(int arr[],int start ,int end ,int key){
	int ans=-1;
	while(start<=end)
	{
		int mid=start+(end - start)/2;
		if(arr[mid]==key)
		{
			ans = mid;
			end = mid - 1;
		}
		else if(arr[mid]>key)
			end = mid-1;
		else start =mid +1;		
	}
	return ans;

}
int lastOccurence(int arr[] ,int start,int end,int key){
	int mid,ans=-1;
	while(start<=end){
		mid = start + (end - start)/2;
		if(arr[mid]==key){
			ans=mid;
			start=mid  + 1;
		}
		else if(arr[mid] > key)
			end = mid-1;
		else start = mid +1;
	}
	return ans;
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
	int key;
	cin>>key;
	int first=firstOccurence(arr,0,n-1,key);
	int last=lastOccurence(arr,0,n-1,key);
	cout<<first<<' '<<last;
	if(first!=-1 || last !=-1)
	cout<<"\ncount = "<<(last-first+1);
	else cout<<"\nCount is 0\n";
	

return 0;
}