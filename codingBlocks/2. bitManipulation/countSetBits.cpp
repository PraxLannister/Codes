#include<iostream>
using namespace std;

class countSetBits
{
public:
	int method1(int n)
	{
		int ans=0;
		while(n>0)
		{
			ans+=(n&1);
			n>>=1;
		}
		return ans;
	}

	int method2(int n)
	{
		int ans=0;
		while(n>0)
		{
			//This Loop Will runs no of times the set bit present
			//n&(n-1) will clear the last set bit
			n=n&(n-1);
			ans++;
		}
		return ans;
	}

};


int main()
{
	while(1)
	{
		int n;
		countSetBits count;
		cin>>n;
		cout<<count.method1(n)<<endl;
		cout<<count.method2(n)<<endl;


	}

}