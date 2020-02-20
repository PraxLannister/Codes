#include <iostream>
#define MOD 1000000007
#define MAX 100000000
using namespace std;
int g[MAX];
void init(int g0,int g1,int g2){
	g[0]=g0;
	g[1]=g1;
	g[2]=g2;
	for(int i=3;i<MAX;i++)
		g[i]=-1;
}

int func(int n){
	if(g[n]!=-1)
		return g[n];
	else
		g[n]= ((func(n-1))%MOD+(3*(func(n-3))%MOD)%MOD+(2*n)%MOD)%MOD;
		return g[n];
}

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
    while(test--){
    	int g0,g1,g2,n;
    	cin>>g0>>g1>>g2>>n;
    	init(g0,g1,g2);
    	int ans = func(n);
    	cout<<ans<<endl;
    }
	

return 0;
}