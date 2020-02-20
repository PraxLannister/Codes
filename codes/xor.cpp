#include <iostream>
using namespace std;

long uptoxor(long n){
	long mod = n%4;
	if(mod==0) return n;
	if(mod==1) return 1;
	if(mod==2) return n+1;
	return 0;
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


	int t;
	cin>>t;
	while(t--){
		int q;
		cin>>q;
		while(q--){
			long a,b;
			cin>>a>>b;
			long a_xor = uptoxor(a-1);
			long b_xor = uptoxor(b);
			cout<<(b_xor^a_xor)<<endl;
		}
	}
	

return 0;
}