#include <iostream>
using namespace std;

int  main()
{
	int a,n;
	cin>>a>>n;
	int last_bit;
	int ans=1;
	while(n)
	{
		last_bit=n&1;
		if(last_bit)
			ans*=a;
		a = a*a;
		n=n>>1;
	}
	cout<<endl<<ans;

	return 0;
}