#include<iostream>
#define MOD 1000000007
using namespace std; 
long long exponent(long long a,long long b)
{
	
	if(b==0)
		return 1;
	if(b==1)
		return a;
	long long y = exponent(a,b/2);

	
	y = ((y%MOD)*(y%MOD))%MOD;
	
	if(b&1)
		y = (y*(a%MOD))%MOD;
	
	return y;
}

int main()
{
	#ifndef ONLINE_JUDGE
    	// for getting input from input.txt
    	freopen("input.txt", "r", stdin);
    	// for writing output to output.txt
    	freopen("output.txt", "w", stdout);
	#endif


	long long a,b;
	cin>>a>>b;
	long long res = exponent(a,b);
	cout<<res;
	

return 0;
}