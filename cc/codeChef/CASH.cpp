#include<bits/stdc+++.h>
#define ll long long
#define endl "\n"
using namespace std;
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


	/* code here */
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		ll k;
		cin>>n>>K;
		ll arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int i=0,j=n-1;
		int currCarry = 0;
		int requirements = 0;
		bool furtherBreak=false;
		while(i<=j)
		{
			int n=arr[i];
			int m=arr[j];
			int rem1,rem2,quot1,quot2;
			rem2=m%k;

			rem1=n%k;
			quot1=n/k;
			if(quot1)
				furtherBreak=true;

			if(rem2>0)
			{	rem2 = k - rem2;
				requirements += rem2;
				if(requirements)
				{
					while(n>0)
					{
						
						if(n%k==0 && n-k>0)
							currCarry+=k;
						else currCarry+=n%k;
					}
				}
			}


		}

	}
	

return 0;
}