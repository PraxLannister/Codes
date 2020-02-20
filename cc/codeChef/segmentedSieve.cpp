#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
	
using namespace std;

void sieve(int *p,int n)
{
	// mark all odd nunmbers prime
	for(int i=3;i<n;i += 2)
		p[i]=1;
	//claculate sieve
	for(int i=3;i<n;i += 2)
	{
		if(p[i]==1	)
		{
			for(int j=i*i;j<n;j++)
				p[j]=0;
		}
	}
	p[2]=0;
	p[1]=p[0]=0;
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


	ll a,b;
	cin>>a>>b;
	int size2=sqrt(b)+1;
	cout<<size2<<endl;
	int sievePrime[size2];

	memset(sievePrime,0,sizeof(sievePrime));

	int size1= b-a+1;
	int arr1[size1];
	
	for(int i=0;i<size1;i++)
		arr1[i]=1;

	sieve(sievePrime,size2);
	vector<int> primes;

	for(int i=0;i<size2;i++)
	{	
		if(sievePrime[i]==1)
			primes.push_back(i);
	}
	for(int i:primes)
		cout<<i<<" ";

	

return 0;
}