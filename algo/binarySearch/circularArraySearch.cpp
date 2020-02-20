#include <iostream>
#include <algorithm>
using namespace std;

int circularBinarySearch(int arr[],int n ,int key)
{
	//Circularly sorted in descending order

	int lo=0;
	int hi=n-1;
	while(lo<=hi)
	{
		int mid = lo +(hi - lo)/2;
		//case 1 : equal to mid element
		if(arr[mid] == key)
			return mid;

		//if not then there are two possebilities
		//either left half will be sorted or right half
		
		//case 2-
		//Now checking if left half is sorted
		if(arr[lo]>=arr[mid])
		{
			//Now [lo,mid] is sorted 
			//case 2(a)
			//checking if element can lie in left subarray arr[lo,mid] 
			if(key<=arr[lo] && key>arr[mid])
				hi =  mid-1;
			//case 2(b)
			//then element can be in rigth unsorted part
			else lo =  mid + 1;

		}
		//case 3-
		//Now checking if left half was not sorted 
		//then definately right half [mid,hi] is sorted
		if(arr[mid]>=arr[hi])
		{
			//case 3(b)
			//if elemnet can lie in this part
			if(key<arr[mid] && key >=arr[hi])
				lo =  mid + 1;
			// case 3(b)
			//now elemeny can be in right subaaray
			else hi = mid - 1;
		}
	}
	return -1;
}


int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	//input line 1
	cin>>n;
	int arr[n],rotated[n];
	//input line 2
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<endl;
	sort(arr,arr+n,greater<int>());
	for (int i = 0; i < n; ++i)
	{
		cout<<" "<<arr[i];
	}
	//input line 3
	int k;
	cin>>k;
	for (int i = 0; i < n; ++i)
	{	//rotate  clockwise
		//Pron]blem abhi cnat rotate for k>n
		rotated[i]=arr[((int)-(k%n)+n)%n];
	}
	
	cout<<endl;
	for (int i = 0; i < n; ++i)		
	{
	 	cout<<" "<<rotated[i];
	}
	cout<<endl;
	//search in circulary Roatated Array
	//input line 4
	int key;
	cin>>key;
	int index = circularBinarySearch(rotated,n,key);
	if(index != -1)
		cout<<"Found At i = "<<index;
	else cout<<"Not is circulary sorted&Roatated Array";

return 0;
}