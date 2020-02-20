#include<iostream>
#include <queue>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	priority_queue<int> pq;
	int n,num;
	int arr[n],i=0;
	cin>>n;
	cout<<"n "<<n<<endl;
	while(n--)
	{
		cin>>num;
		//cout<<num<<" ";
		arr[i++]=num;
		pq.push(num);
	}
	while(pq.empty()==false){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<"\n===================\n";
	priority_queue<int> pq2(arr,arr+10);
	while(pq2.empty()==false){
		cout<<pq2.top()<<" ";
		pq2.pop();
	}


return 0;
}