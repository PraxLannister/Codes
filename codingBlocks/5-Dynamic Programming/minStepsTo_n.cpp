#include<iostream>
#include <climits>
#include<vector>
using namespace std;

// allowed steps n/2 , n/3  and n-1
/*
so recursive eqn
f(n) min steps taken to reach n to 1 is
f(n) = min[         ]
			f(n/2), ]
			f(n/3), ]	+ 1(to reach from subProblem to n)
			f(n-1)  ]
		  			]
*/
int minSteps(int n,vector<int> &dp)
{
	//base case
	if(n==1)
		return 0;//0 steps needed to reach from 1 to 1
	//lookup

	if(dp[n]!=-1){
		return dp[n];
	}
	//recursion
	int x=INT_MAX;
	int y=INT_MAX;
	int z=INT_MAX;
	if(n%2==0)
		x=minSteps(n/2,dp);
	if(n%3==0)
		y=minSteps(n/3,dp);
	z=minSteps(n-1,dp);
	dp[n]=min(min(x,y),z)+1;
	return dp[n];

}
int minStepsBU(int n)
{
	cout<<"ENERED:"<<endl;
	vector<int> dp(n+1,0);
	if(n==0 or n==1)
		return 0;
	for(int i=2;i<=n;i++)
	{
		int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
		if(i%2==0){
			op1=dp[i/2];
		}
		if(i%3==0){
			op2=dp[i/3];
		}
		op3=dp[i-1];
		dp[i]=min(min(op1,op2),op3)+1;
		cout<<":: "<<i<<":"<<dp[i]<<endl;
	}
	return dp[n];
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
	//vector<int> dp(n+1,-1);
	// cout<<minSteps(n,dp);
	cout<<minStepsBU(n);


	

return 0;
}