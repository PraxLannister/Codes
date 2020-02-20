#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
       	freopen("output.txt", "w", stdout);
       	freopen("error.txt", "w", stderr);

	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		long arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n,greater<int>()); // n log n
		long max=0;
		for(int i=0;i<n-1;i++){
			if(arr[i]-arr[i+1]>max) max = arr[i]-arr[i+1]; 
		}
		cout<<max<<"\n";

	}
	

return 0;
}