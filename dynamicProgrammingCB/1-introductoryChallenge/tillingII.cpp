#include<iostream>
#include<cstring>
#define MOD 1000000007
using namespace std;
int tillingII(int n,int m)
{
	//cout<<"called ";
	if(n<m){
		///cout<<" one \n";
		return 1;
	}
	if(n==m) {
		//cout<<" two : \n";
		return 2;
	}
	int dp[n+10];
	dp[0]=0;
	for(int i=1;i<m;i++)
		dp[i]=1;
		dp[m]=2;
	for(int i=m+1;i<=n;i++){

		//cout<<"inloop i and i-m is "<<i<<" : "<<i-m<<" \n";
		dp[i]=(dp[i-1]+dp[i-m])%MOD;
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


	int test,n,m;
	cin>>test;
	//cout<<test;
	while(test--)
	{
		cin>>n>>m;
		//cout<<"calling : "<<n<<" : "<<m<<endl;
		cout<<tillingII(n,m)<<endl;
	}
	

return 0;
}