#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int lower_bound(int *arr,int key)
{
	int l=0,r=9;
	int mid;
	int ans=-1;
	while(l<=r)
	{
		mid=(r+l)/2;
		if(arr[mid]>=key)
		{
			ans=mid;
			r=mid-1;

		}
		else
		{
			l=mid+1;

		}
	}
	return ans;
}

int main()
{
	int arr[10];
	cout<<"\nEnter Array \n";
	for(int i=0;i<10;i++)
		cin>>arr[i];
	sort(arr,arr+10);
	int up,low;
	cout<<"\n Nter key to find its lower bound : ";
	cin>>low;
	int pos=lower_bound(arr,low);
	cout<<"+=========+\n"<<pos;

	return 0;
}