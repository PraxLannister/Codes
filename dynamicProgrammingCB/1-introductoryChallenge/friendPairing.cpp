#include<iostream>
#include <vector>

#define endl "\n"
using namespace std;

///////////////////////////////////////
int friendsPairing(int n,vector<int> dp)
{
	if(dp[n]!=-1)
		return dp[n];
	int ans = friendsPairing(n-1,dp)+(n-1)*friendsPairing(n-2,dp);
	dp[n]=ans;
	return ans;
}
//////////////////////////////////////
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
		vector<int> dp(n+1,-1);
		dp[0]=0;
		dp[1]=1;
		dp[2]=2;
		cout<<friendsPairing(n,dp)<<endl;

	}
return 0;
}