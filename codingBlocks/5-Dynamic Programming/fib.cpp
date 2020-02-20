#include<iostream>
using namespace std;
int fib(int n)
{
	if(n==0 or  n==1)
		return n;
	int ans;
	ans = fib(n-1) + fib(n-2);
	return ans;
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


	int n;
	cin>>n;
	cout<<fib(n);
	

return 0;
}