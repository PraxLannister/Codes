#include <iostream>
#include <cstring>
#include<climits>
using namespace std;

int minCoinChange(int change,int coins[],int noOfCoins,int dp[])
{
	cout<<"\nCalled For change :"<<change<<" === \n";
	//base case
	if(change<=0)
		return 0;
	if(dp[change]!=-1)
		return dp[change];
	int ans = INT_MAX;
	for(int i=0;i<noOfCoins;i++)
	{

		if(change - coins[i]>=0)
		{
			int subProb = minCoinChange(change-coins[i],coins,noOfCoins,dp);
			ans = min(ans,subProb) +1;
		}
	}
	if(ans != INT_MAX)
		dp[change]=ans;
	else 
		dp[change]=10000;

	cout<<"filling dp [ "<<change<<" ]"<<" as = "<<dp[change]<<endl;

	return dp[change];
}

int minCoinChangeBU(int amount,int coins[],int noOfCoins)
{
/*	if(amount==0)
		return 0;
*/	int dp[amount+1];
	dp[0]=0;
	for(int i=1;i<=amount;i++)
	{
		dp[i]=amount+10;
		for(int c=0;c<noOfCoins;c++)
		{
			if(i>=coins[c])
			{
				dp[i] = min(dp[i],dp[i-coins[c]]+1);
			}
		}
	}
	if(dp[amount]<=amount)
		return dp[amount];
	else
		return -1;
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


	int noOfCoins,change;
	cin>>noOfCoins;
	int coins[noOfCoins];
	for(int i=0;i<noOfCoins;i++)
		cin>>coins[i];
	cin>>change;
	int dp[change+10];
/*	memset(dp,-1,sizeof(dp));
	int lowestChange = minCoinChange(change,coins,noOfCoins,dp);
	if(lowestChange!=INT_MAX){
	cout<<lowestChange<<endl;
	}
	cout<<endl;
	for(int i=0;i<=change;i++)
		cout<<dp[i]<<" ";
*/	
	cout<<minCoinChangeBU(change,coins,noOfCoins);

return 0;
}