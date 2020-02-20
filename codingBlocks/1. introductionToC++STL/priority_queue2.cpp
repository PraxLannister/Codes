#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int> pq;
	int arr[]={1,223,435,6,57,68,79,79,23,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		pq.push(arr[i]);
	}
	while(!pq.empty())
	{
		cout<<pq.top()<<",";
		pq.pop();
	}
	cout<<"\n======================\n";
	priority_queue<int,vector<int> ,greater<int>> pq2;
	for(int i=0;i<n;i++)
	{
		pq2.push(arr[i]);
	}
	while(!pq2.empty())
	{
		cout<<pq2.top()<<",";
		pq2.pop();
	}

	return 0;
}