#include <iostream>
#include<vector>
using namespace std;

class solution
{
public:
	int countPrimes(int n)
	{
		int isPrime[n+1];
		for(int i=0;i<=n;i++)
			isPrime[i]=1;
		
		isPrime[0]=isPrime[1]=0;
		
		for(int i=2;i*i<=n;i++)
		{
			if(isPrime[i])
			{
				for(int j=i*i;j<=n;j+=i)
					isPrime[j]=0;
			}
		}
		int count=0;
		for(int i=0;i<=n;i++)
			count+=isPrime[i];
		return count;
	}
};

int main()
{
	int n;
	cin>>n;
	solution s;
	cout<<endl<<s.countPrimes(n);
	



	return 0;
}