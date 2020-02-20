#include<iostream>
#include<queue>
using namespace std;
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
	priority_queue<int> pq(arr,arr+n);
	priority_queue<int,vector<int>,greater<int>>pq2(arr,arr+n);
	cout<<pq.top()<<" "<<pq2.top()<<endl;
	cout<<"\n===============\n";
	for(int i=0;i<n;i++)
	{
		if(i2%)
		{
			int ele = pq2.top();
			arr[i]=ele;

			pq2.pop();

		}
		else
		{



			int ele = pq.top();
			arr[i]=ele;
			pq.pop();
			
		}
	}
		for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	

return 0;
}