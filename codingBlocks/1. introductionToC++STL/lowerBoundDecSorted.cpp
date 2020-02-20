//decreasing order sorted
//smallest element greater than or equal to aksed element
#include <iostream>
#include<vector>

using namespace std;

int smallestUpperBound(int arr[],int l,int r,int key)
{
	int mid;
	int index=-1;
	while(l<=r)
	{
		mid=l+(r-l)/2;
		if(arr[mid]<=key)
			r=mid-1;

		else{
			l=mid+1;
			index=mid;
		}
	}
	return index;
}

int main()
{
	int arr[10];
	int key,index;
	for(int i=0;i<10;i++)
		cin>>arr[i];
	cout<<"\nkey :";
	cin>>key;
	index=smallestUpperBound(arr,0,9,key);
	if(index!=-1)
		cout<<"\nFound : "<<arr[index];
	else
		cout<<"\n Not Found: ";

	return 0;
}