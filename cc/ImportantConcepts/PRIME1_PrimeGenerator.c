#include <stdio.h>
void sieve(int n,int m)
{
	//int t=n;
	n++;
	int isPrime[n];
	int i,j;
	
	for(i=0;i<n;i++) 
		isPrime[i]=1;
		
	isPrime[0]=0;
	isPrime[1]=0;
	for(i=2;i*i<n;i++)
	{
		if(isPrime[i]==1)
		{
			for(j=i*i;j<=n;j+=i)
				isPrime[j]=0;
		}
	}
	//int count=0;
	for(i=m;i<=n;i++)
	{
		if(isPrime[i]==1)
			printf("%d\n",i);
	}
	
	//return count;
	
}

int main(void) {
	// your code here
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		int n,m;
		scanf("%d %d",&m,&n);
		sieve(n,m);
		printf("\n");
	}

	return 0;
}