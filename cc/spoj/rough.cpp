#include<iostream>
#include<vector>

#define ll long long 
#define MOD 1000000000

using namespace std;

int k;
vector<ll> b,c;


vector<vector<ll> > multiply(vector<vector<ll>> A, vector<vector<ll>> B)
{
	vector<vector<ll>> C (k+1,vector<ll>(k+1));
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=k;j++)
		{
			for(int x=1;x<=k;x++)
				C[i][j] = (C[i][j] + (A[i][x]*B[x][j])%MOD)%MOD;
		}
	}
	return C;
}


vector<vector<ll> > pow(vector<vector<ll>> A,ll p)
{
	if(p == 1)
		return A;
	vector<vector<ll>> X;
	X = pow(A,p/2);
	X = multiply(X,X);
	if(p&1)
		X = multiply(X,A);
	return X;
}

ll compute(ll n)
{
	if(n == 0)
		return 0;
	if(n <= k)
		return b[n];
	//1
	vector<ll> F1(k+1);
	for(int i=1;i<=k;i++)
		F1[i]=b[i];
	//2
	
	vector<vector<ll> > T(k+1,vector<ll>(k+1));
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=k;j++)
		{
			if(i<k)
			{
				if(j==i+1)
					T[i][j]=1;
				else 
					T[i][j]=0;
			}
			else
			{
				T[i][j]=c[k-j+1];
			}
		}
	}
	//3
	T = pow(T,n-1);
	//4
	int res = 0;
	for(int j=1;j<=k;j++)
	{
		res = (res + (T[1][j]*F1[j])%MOD)%MOD;
	}
	return res;
	
	
}


int main()
{
		#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif
	ll num,n;
	int test;
	cin>>test;
	while(test--)
	{
		cin>>k;
		b.push_back(0);
		for(int i=0;i<k;i++)
		{
			cin>>num;
			b.push_back(num);
		}
	
		c.push_back(0);
		for(int i=0;i<k;i++)
		{
			cin>>num;
			c.push_back(num);
		}
		cin>>n;
		cout<<compute(n)<<endl;
		b.clear();
		c.clear();
		
	}
}