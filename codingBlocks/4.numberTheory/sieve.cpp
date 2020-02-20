#include<iostream>
#include<string.h>

using namespace std;
void sieve(int * arr, int n)
{
	for(int i=2;i*i<n;i++)
	{
		if(arr[i]==0)
		{
			for(int j=i*i;j<n;j+=i)
				arr[j]=1;
		}
	}
	arr[0]=arr[1]=1;
}

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


	int n;
	cin>>n;
	int arr[n+1];
	memset(arr,0,sizeof(arr));

	sieve(arr,n+1);
	for(int i=0;i<=n;i++)
	{
		if(arr[i]==0)
			cout<<i<<" ";
	}
	

return 0;
}