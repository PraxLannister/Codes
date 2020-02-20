#include<iostream>
#define ll long long 
using namespace std;
int main()
{

		#ifndef ONLINE_JUDGE
    	// for getting input from input.txt
    	freopen("input.txt", "r", stdin);
    	// for writing output to output.txt
    	freopen("output.txt", "w", stdout);
	#endif

	
	int test;
	cin>>test;
	ll subsets = (1<<8)-1;
	int primes[]={2,3,5,7,11,13,17,19}; //8 primes
	while(test--)
	{
		ll n;
		cin>>n;
		ll ans =0;
		
		for(ll i=1;i<=subsets;i++)
		{
			ll setbits = __builtin_popcount(i);
		//	cout<<"setbits = "<<setbits<<endl;
			ll denom = 1ll;
		//	cout<<"denom "<<denom<<endl;
			for(ll j=0;j<=7;j++)
			{
				if(i&(1<<j))
					denom = denom * primes[j];

			}
			if(setbits&1)
				ans = ans + (n/denom);
			else 
				ans = ans - (n/denom);

		}

		cout<<ans<<endl;
	}
	

return 0;
}