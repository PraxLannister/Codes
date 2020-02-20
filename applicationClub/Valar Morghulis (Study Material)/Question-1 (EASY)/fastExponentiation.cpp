#include <iostream>
using namespace std;
long long fastExponebtiation(int x ,int n)
{
	//base case
	if(n==0)
		return 1;
	if(n==1)
		return x;
	//Recursive Case
	/*long long y;
		if(n%2 == 0)
		return y*y;
		return x*y*y;*/
		if(n%2==0)
		return fastExponebtiation(x,n/2)*fastExponebtiation(x,n/2);
		return x*fastExponebtiation(x,n/2)*fastExponebtiation(x,n/2);
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		int x,n,test;
		cin>>test;
		while(test--){
			cin>>x>>n;
			cout<<fastExponebtiation(x,n)<<endl;
		}
		return 0;

}