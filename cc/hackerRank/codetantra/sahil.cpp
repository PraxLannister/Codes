#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif

    int test;
    cin>>test;
    while(test--)
    {
    	ll ans =0;
    	ll primes40[]={ 2,3,5,7,11,13,17,19,23,29,31,37 };
    	ll size = sizeof(primes40)/sizeof(primes40[0]);
    	ll n;
    	cin>>n;
    	ll max = 1<<size;
    	for(ll i=1;i<max;i++)
    	{
    		ll setBitCount= (ll) __builtin_popcount(i);
    		ll num = i;
    		ll j=0;
    		ll mask =1;
    		ll devisor =1;
    		while(num){
    			if(num & mask){
    				devisor *= primes40[j];
    			}
    			num = num/2;
    			j++;
    		}
    		ll currAddup = n / devisor;
    		if(setBitCount%2==0)
    			currAddup = -currAddup;
    		ans += currAddup;
    	}
    	cout<<ans<<endl;
    }

	

	

return 0;
}