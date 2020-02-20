#include<iostream>
#include<string.h>
#include <math.h>
#include<vector>
#define ll long long
#define endl "\n"

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

	ll a,b;
	cin>>a>>b;
	int sieveSize=sqrt(b)+1;
	cout<<sieveSize<<" "<<endl;
	int primeSieve[sieveSize];
	memset(primeSieve,0,sizeof(primeSieve));
	//0 means prime
	sieve(primeSieve,sieveSize);
	vector<int> ans;
	for(int i=0;i<sieveSize;i++)
	{
		if(primeSieve[i]==0)
			ans.push_back(i);
	}
	int mainSize = b-a+1;
	int mainArray[mainSize];
	memset(mainArray,0,sizeof(mainArray));

	for(int x : ans)
	{
		int base = (a/x)*x;
		if(x!=base)
			base=base+x;
		for(int i=base;i<b;i=i+x)
		{
			mainArray[base-a]=1;
		}
	}
	for(int i=0;i<mainSize;i++)
	{
		if(mainArray[i]==0)
			cout<<i<<" ";
	}
	

return 0;
}