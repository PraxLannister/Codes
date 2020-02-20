#include<iostream>
#include <cstring>
#define endl "\n"
using namespace std;
int fibDP(int n,int dp[])
{
	//base
	if(n==0 or n==1)
		return n;
	//lookup
	if(dp[n]!=-1)
		return dp[n];
	//recursive casel
	dp[n] = fibDP(n-1,dp)+fibDP(n-2,dp);
	return dp[n];
}
int fibDP_BU(int n)
{
	int dp[n+1]={0};
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
int fibDPspaceOptBU(int n)
{
	int first = 0;
	int second = 1;
	if(n==0 or n==1)
		return n;
	int ans;
	for(int i=2;i<=n;i++)
	{
		ans = first+second;
		first=second;
		second=ans;
	}
	return ans;
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
	int dp[n+10];
	memset(dp,-1,sizeof dp);
	cout<<fibDP(n,dp)<<endl;
	cout<<fibDP_BU(n)<<endl;
	cout<<fibDPspaceOptBU(n)<<endl;
	

return 0;
}