#include<bits/stdc++.h>
#define endl "\n"
#define mod 1000000007
#define ll long long
using namespace std;
vector<vector<ll>>multiply(vector<vector<ll>> A, vector<vector<ll>>B)
 {
    vector<vector<ll>> C(2,vector<ll>(2,0));
     for(int i=0;i<2;i++)
     {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
                C[i][j] =(C[i][j] + (A[i][k]*B[k][j])%mod)%mod;
        }
     }
     return C;
 }

vector<vector<ll>> pow(vector<vector<ll>>A,int n)
{
    vector<vector<ll>> X;
    if(n==1)
        return A;
    X = pow(A,n/2);
    X = multiply( X, X);
    if(n&1)
        X = multiply(X,A);
    return X;
}
ll calculate(int n ,int x,int y)
{
    vector<ll> F1(2);
    F1[0]=x;
    F1[1]=y;
    if(n<2)
        return F1[n];
    vector<vector<ll>> T  {
                            {0,1},
                            {1,1},
                            };
    T = pow(T,n);
    ll res = 0l;
    for(int i=0;i<2;i++)
    {
     res = (res + (T[0][i]*F1[i])%mod)%mod;        
    }
    return res;
    
}
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

   ll test;
   cin>>test;
    while(test--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
        cout<<calculate(n,x,y)<<endl;
        
    }
    return 0;
}