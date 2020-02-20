#include<bits/stdc++.h>
using namespace std;
#define ll long
ll fib(int n)
{
	ll dp[n+10];
	dp[0]=dp[1]=1;
	for(int i=2;i<=n;i++)
	dp[i]=(ll)dp[i-1]+(ll)dp[i-2];
	return (ll)dp[n];
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
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		cout<<fib(n+1)<<endl;
	}
}