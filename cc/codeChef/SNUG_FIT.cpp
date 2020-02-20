#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
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


	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		long A[n],B[n];
		for(int i=0;i<n;i++)
			cin>>A[i];
		for(int i=0;i<n;i++)
			cin>>B[i];
		sort(A,A+n);
		sort(B,B+n);
		long long s = 0;
		for(int i=0;i<n;i++)
			s += min(A[i],B[i]);
		cout<<s<<endl;

	}
	

return 0;
}