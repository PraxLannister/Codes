#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int n;
	int hash[1000000]={0};
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		hash[arr[i]]++;
	}
	int curMax,max;
	max=curMax=1;
	for(int i=0;i<1000000;i++)
	{
		if(arr[i]==1 && arr[i]==arr[i+1] )
		{
			curMax++;

		}
		if(arr[i]==0)
		{
			if(curMax>max)
				max = curMax;
			curMax =1;
		}

	}
	cout<<max;
	

return 0;
}