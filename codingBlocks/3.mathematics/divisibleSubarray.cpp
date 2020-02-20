#include<iostream>
#include<cstring> // for memset
#define ll long 
using namespace std;
ll arr[1000005],freqN[1000005];
int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif


	int test;
	cin>>test;
	while(test--)
	{
		ll n;
		cin>>n;
		memset(freqN,0,sizeof(freqN));
		freqN[0]=1;
		//since 0 sum subarray will appear atleast once 
		//since sum of null subarray is 0
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum += arr[i];
			freqN[(sum+n)%n]++; //since negative nos allowed so sum can also be negative
		}
		ll ans=0;
		for(int i=0;i<n;i++)
		{
			ll m = freqN[i];
			ans += m*(m-1)/2;
		}
		cout<<ans<<endl;


	}
	

return 0;
}