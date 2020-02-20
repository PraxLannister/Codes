#include<iostream>
#include<vector>

#define MOD 1000000000
#define ll long long 
#define pb push_back

using namespace std;

vector<ll> b,c;
int k;

vector<vector<ll> > multiply(vector<vector<ll>> A,vector<vector<ll>> B){

	vector<vector<ll>> Cmat(k+1,vector<ll>(k+1));

	for(int i=1;i<=k;i++){
		for(int j=1;j<=k;j++){
			for(int x=1;x<=k;x++){
					Cmat[i][j] = (Cmat[i][j]+( A[i][x]*B[x][j])%MOD)%MOD;
			}
		}
	}

	return Cmat;	
}


vector<vector<ll> > pow(vector<vector<ll> > A,ll p){
	if(p == 1)
		return A;
	vector<vector<ll> > X;
	X = pow(A,p/2);
	X = multiply(X,X);
	if(p&1)
		X = multiply(X,A);
	return X;

}

ll nthTerm(ll n){
	if(!n)
		return 0;
	if(n<=k)
		return b[n];
	//cout<<"ENTER "<<endl;
	vector<ll> F1(k+1);
	for(int i=0;i<=k;i++){
		F1[i]=b[i];
	}

	vector<vector<ll>> T(k+1,vector<ll>(k+1));
	
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=k;j++)
		{
			if(i<k)
			{
				if(j==i+1)
					T[i][j] = 1;
				else 
					T[i][j] = 0;
				//continue;
			}
			else{
				T[i][j]=c[k-j+1];
			}

		}
	}

	T=pow(T,n-1);
	ll res =0;
	for(int i=1;i<=k;i++)
	res = (res + (T[1][i]*F1[i])%MOD)%MOD;
	return res;

}


int main()	
{
	#ifndef ONLINE_JUDGE
    	
    	freopen("input.txt", "r", stdin);
    	
    	freopen("output.txt", "w", stdout);
	#endif

    b.pb(0);
	c.pb(0);
	int test;
	cin>>test;
	while(test--){
		cin>>k;
		for(int i=0;i<k;i++)
		{
			int temp;
			cin>>temp;
			b.pb(temp);
		}
		for(int i=0;i<k;i++)
		{
			int temp;
			cin>>temp;
			c.pb(temp);
		}
		ll n;
		cin>>n;
		cout<<nthTerm(n)<<endl;

		b.clear();
		c.clear();
		b.pb(0);
		c.pb(0);
	}
	

return 0;
}