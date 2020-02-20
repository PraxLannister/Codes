#include <iostream>
using namespace std;

int recurBinSearch(int *arr , int start , int end , int key)
{
	if(start>end)
		return -1;
	int mid = start + (end - start )/2;
	if(arr[mid]==key)
		return mid;
	if(arr[mid]>key)
		return recurBinSearch(arr,start,mid-1,key);
	else return recurBinSearch(arr,mid+1,end,key);
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
    int index = recurBinSearch(arr,0,n-1,key);
    cout<<index;
    return 0;
}