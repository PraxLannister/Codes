#include <iostream>
using namespace std;

int countRotation(int arr[] ,int n)
{
	int lo = 0;
	int hi = n-1;
	while(lo<=hi)
	{
		if(arr[lo] <= arr[hi]){
			cout<<"arr[lo] :"<<arr[lo]<<endl;
			cout<<"arr[hi] :"<<arr[hi]<<endl;
			cout<<"Case 1 :"<<lo<<endl;
			return lo;
			 // case 1 already sorted in ascending order
		}
		int mid = lo + (hi -lo)/2;
		int prev = (mid - 1 + n)%n;
		int next = (mid + 1) % n;
		if(arr[mid] <= arr[prev] && arr[mid] <= arr[next]){
			cout<<"Case 2 mid :"<<mid<<endl;
			return mid; // if mid ele is smallest then it is pos of piviot i.e rotation count
		}
		if(arr[mid] >= arr[lo]) {
			lo = mid + 1;
			cout<<"Case 3 lo :"<<lo<<endl;
		}
		else {
			cout<<"Case 4 hi :"<<hi<<endl;
			hi = mid -1;		
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
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<countRotation(arr,n);
	

return 0;
}