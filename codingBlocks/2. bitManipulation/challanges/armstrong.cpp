#include<iostream>
#define ll long long
using namespace std;


ll pow(ll n, ll p)
{
	if(p == 0)
		return 1;
	if( p == 1)
		return n;
	ll x = pow(n,p/2);
	x = x*x;
	if(p&1)
		x = x*n;
	return x;
}

int noOfDigits(ll n){
	if(n>=0 && n<=9)
		return 1;
	int count =0;
	while(n)
	{
		n = n/10;
		count++;
	}
	return count;

}

bool isArm(ll n)
{
	ll orignum = n;
	if(n == 0 || n==1)
		return true;
	ll totalDigit = noOfDigits(n);
	ll sum = 0;
	while(n)
	{
		int digit =  n%10;
		sum = sum + pow(digit,totalDigit);
		n = n/10;
	}
	//cout<<sum<<" SUM\n";
	if(sum == orignum){
		return true;
	}
	else {
		return false;
	}

}

int main()
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif
    ll n1,n2;
    cin>>n1>>n2;
   	for(ll i = n1;i<=n2;i++)
   	{
   		if(isArm(i))
   			cout<<i<<endl;
   	}
   	



	
	

return 0;
}