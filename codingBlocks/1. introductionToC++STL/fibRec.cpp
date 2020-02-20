#include<iostream>

using namespace std;

int F[51];

int fib(int n)
{
	if(n<=1)
		return n;
	if(F[n]!= -1)
		return F[n];
	return F[n]=fib(n-1)+fib(n-2);
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt", "w" ,stdout);
	#endif



	int n,test;
	cin>>test;
		for(int i=0;i<52;i++)
			F[i]=-1;
	while(test--){
		cin>>n;
		cout<<fib(n)<<endl;
	}
}